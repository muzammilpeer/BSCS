<?php
class register {
    function  __construct() {
        $con = mysql_connect("127.0.0.1", "root", "");
        mysql_select_db("organ_reg", $con);
    }

    function insertPendingOrgan($userName, $pword, $organName, $url, $type, $district, $city, $address, $sup, $reb, $com, $edu, $med) {
        mysql_query("INSERT into organ_pending (name, url, type, district, city, address, username, password, sec_rehabilitation, sec_communication, sec_education, sec_medical, sec_supplier) values ('$organName', '$url', '$type', '$district', '$city', '$address', '$userName', '$pword', '$reb', '$com', '$edu', '$med', '$sup')");
    }

    function insertPendingContact($name, $address, $phone, $cell, $fax, $email, $username) {
        mysql_query("INSERT into contact_pending (name, address, phone, cell, fax, email, username) values ('$name', '$address', '$phone', '$cell', '$fax', '$email', '$username')");
    }
}

class registerBranch {
    public $branchID;
    function  __construct() {
        $con = mysql_connect("127.0.0.1", "root", "");
        mysql_select_db("organ_reg", $con);
    }

    function insertPendingBranch($username, $district, $city, $address) {
        mysql_query("INSERT into branch_pending (username, district, city, address) VALUES ('$username', '$district', '$city', '$address')");
        $res = mysql_query("SELECT branchID from branch_pending where username = '$username' and district = '$district' and city = '$city' and address = '$address'");
        $row = mysql_fetch_array($res);
        return $row['branchID'];
    }

    function insertBranchContact($name, $address, $phone, $cell, $fax, $email, $username, $branch) {
        mysql_query("INSERT into branch_contact_pending (name, branch, address, phone, cell, fax, email) VALUES ('$name', '$branch', '$address', '$phone', '$cell', '$fax', '$email')");
    }

    function insertBranchResource($resource, $qty, $username, $branch) {
        $resource;

        $exists = false;
        $columns = mysql_query("show columns from resource_pending");
        while($c = mysql_fetch_assoc($columns)) {
            if($c['Field'] == $resource) {
                $exists = true;
                break;
            }
        }
        if($exists == false) {
            mysql_query("ALTER TABLE resource_pending ADD ".$resource." INT(30) NULL");
        }
        mysql_query("INSERT resource_pending (branch, ".$resource.") VALUES ('$branch', '$qty')");
    }
}

class admin {

    function  __construct() {
        $con = mysql_connect("127.0.0.1", "root", "");
        mysql_select_db("organ_reg", $con);
    }


    function verifyAdmin() {
        $res = mysql_query("select * from admin where username='$_POST[admin]'");

        if (mysql_fetch_array($res) == 0)
            header( 'Location: adminLogin.php' ) ;

        $res = mysql_query("select * from admin where username='$_POST[admin]'");
        $pas = $_POST['pword'];
        while($row = mysql_fetch_array($res)) {
            if ($pas != $row['password'])
                header( 'Location: adminLogin.php' ) ;
        }
    }

    function accept($username) {
        $res = mysql_query("select * from organ_pending where username='$username'");
        while($row = mysql_fetch_array($res)) {
            $name = $row['name'];
            $url = $row['url'];
            $type = $row['type'];
            $district = $row['district'];
            $city = $row['city'];
            $address = $row['address'];
            $password = $row['password'];
            $sec_rehab = $row['sec_rehabilitation'];
            $sec_comm = $row['sec_communication'];
            $sec_edu = $row['sec_education'];
            $sec_med = $row['sec_medical'];
            $sec_supp = $row['sec_supplier'];
        }
        
        mysql_query("insert into organization (name, url, type, district, city, address, username, sec_rehabilitation, sec_communication, sec_education, sec_medical, sec_supplier) values ('$name', '$url', '$type', '$district', '$city', '$address', '$username', '$sec_rehab', '$sec_comm', '$sec_edu', '$sec_med', '$sec_supp')");
        mysql_query("insert into login_cred (username, password) values ('$username', '$password')");

        $res = mysql_query("select * from contact_pending where username='$username'");
        $row = mysql_fetch_array($res);
        $name = $row['name'];
        $address = $row['address'];
        $phone = $row['phone'];
        $cell = $row['cell'];
        $fax = $row['fax'];
        $email = $row['email'];
        mysql_query("INSERT into contact (name, address, phone, cell, fax, email, username) VALUES ('$name', '$address', '$phone', '$cell', '$fax', '$email', '$username')");
        mysql_query("DELETE from contact_pending where username='$username'");

        $res = mysql_query("select * from branch_pending where username='$username'");
        while ($row = mysql_fetch_array($res)) {
            $branch = $row['branchID'];
            $district = $row['district'];
            $city = $row['city'];
            $address = $row['address'];
            mysql_query("INSERT into branch (username, district, city, address, branchID) VALUES ('$username', '$district', '$city', '$address', '$branch')");

            $cont = mysql_query("select * from branch_contact_pending where branch='$branch'");
            while ($contact = mysql_fetch_array($cont)) {
                $name = $contact['name'];
                $address = $contact['address'];
                $phone = $contact['phone'];
                $cell = $contact['cell'];
                $fax = $contact['fax'];
                $email = $contact['email'];
                mysql_query("insert into branch_contact (name, branch, address, phone, cell, fax, email) VALUES ('$name', '$branch', '$address', '$phone', '$cell', '$fax', '$email')");
                mysql_query("delete from branch_contact_pending where branch='$branch'");
            }

            $cols = mysql_query("select column_name from information_schema.columns where table_schema='organ_reg' and table_name='resource_pending'");
            while ($colName = mysql_fetch_array($cols)) {
                $exists = false;
                $columns = mysql_query("show columns from resource");
                while($c = mysql_fetch_assoc($columns)) {                    
                    if($c['Field'] == $colName[0]) {
                        $exists = true;
                        break;
                    }
                }
                if($exists == false) {
                    mysql_query("ALTER TABLE resource ADD ".$colName[0]." INT(30) NULL");
                }
            }

            $reso = mysql_query("select * from resource_pending where branch='$branch'");
            while ($resource = mysql_fetch_array($reso)) {
                $cols = mysql_query("select column_name from information_schema.columns where table_schema='organ_reg' and table_name='resource_pending'");
                $count = mysql_query("select count(*) from information_schema.columns where table_schema='organ_reg' and table_name='resource_pending'");
                $colCount = mysql_fetch_array($count);
                $query = "INSERT into resource (";
                for ($i=0; $i<$colCount['count(*)']; $i++) {
                    $colName = mysql_fetch_array($cols);
                    if ($i == $colCount['count(*)']-1) {
                        $query .= "$colName[0]".")";
                    }else
                        $query .= "$colName[0]".", ";
                }
                $query .= "VALUES (";
                for ($i=0; $i<$colCount['count(*)']; $i++) {
                    if ($i == $colCount['count(*)']-1) {
                        if ($resource[$i] == 0)
                            $query .= "0".")";
                        else
                            $query .= "$resource[$i]".")";
                    }else {
                        if ($resource[$i] == 0)
                            $query .= "0".", ";
                        else
                            $query .= "$resource[$i]".", ";
                    }
                }
                mysql_query($query);
            }
            mysql_query("delete from resource_pending where branch='$branch'");
        }
        mysql_query("DELETE from branch_pending where username='$username'");
        $username;
        mysql_query("delete from organ_pending where username='$username'");
    }


    function reject($username) {
        echo "contact";
        echo mysql_query("delete from contact_pending where username='$username'");
        echo "<br/>";
        $res = mysql_query("select branchID from branch_pending where username='$username'");
        while($row = mysql_fetch_array($res)) {
            $branchID = $row['branchID'];
            echo "branch contact";
            echo mysql_query("delete from branch_contact_pending where branch='$branchID'");
            echo "<br/>";
            echo "resource pending";
            echo mysql_query("delete from resource_pending where branch='$branchID'");
            echo "<br/>";
            echo "branch pending";
            echo mysql_query("delete from branch_pending where username='$username' AND branchID='$branchID'");
            echo "<br/>";
        }        
        echo "organ pending";
        echo mysql_query("delete from organ_pending where username='$username'");
        echo "<br/>";
    }
}

class authenticate {
    function  __construct() {
        $con = mysql_connect("127.0.0.1", "root", "");
        mysql_select_db("organ_reg", $con);
    }


    function authenticateUser() {
        session_start();
        if (isset($_SESSION['user']))
            $res = mysql_query("select * from login_cred where username='$_SESSION[user]'");
        else
            $res = mysql_query("select * from login_cred where username='$_POST[username]'");

        if (mysql_fetch_array($res) == 0)
            header( 'Location: login.php' ) ;

        if (isset($_SESSION['user'])) {
            $res = mysql_query("select * from login_cred where username='$_SESSION[user]'");
            $pas = $_SESSION['pass'];
        }

        else {
            $res = mysql_query("select * from login_cred where username='$_POST[username]'");
            $pas = $_POST['pass'];
        }

        while($row = mysql_fetch_array($res)) {
            if ($pas != $row['password'])
                header( 'Location: login.php' ) ;
        }

        if (!isset($_SESSION['user'])) {
            $_SESSION['user']=$_POST['username'];
            $_SESSION['pass']=$_POST['pass'];
        }
    }
}
?>