<?php include 'header.php' ?>
<div align="center" class="VERDANA14" style="color:#FFFFFF; background-color:#000099; font-weight: bold;">Organization Registration : STEP 2</div>
<form name="regStep2" action="regStep3.php" method="POST">
    <fieldset><legend>Base Location Contact Information</legend>
        <table width="100%" border="0">
            <?php
            echo "<input type='hidden' name='userName' value='$_POST[userName]' readonly='readonly' />";
            echo "<input type='hidden' name='pword' value='$_POST[pword]' readonly='readonly' />";
            echo "<input type='hidden' name='organName' value='$_POST[organName]' readonly='readonly' />";
            echo "<input type='hidden' name='url' value='$_POST[url]' readonly='readonly' />";
            echo "<input type='hidden' name='type' value='$_POST[type]' readonly='readonly' />";
            if(isset($_POST['supplier']))
                $flag = 1;
            else $flag = 0;
            echo "<input type='hidden' name='supplier' value='$flag' readonly='readonly' />";
            if(isset($_POST['rehab']))
                $flag = 1;
            else $flag = 0;
            echo "<input type='hidden' name='rehab' value='$flag' readonly='readonly' />";
            if(isset($_POST['com']))
                $flag = 1;
            else $flag = 0;
            echo "<input type='hidden' name='com' value='$flag' readonly='readonly' />";
            if(isset($_POST['edu']))
                $flag = 1;
            else $flag = 0;
            echo "<input type='hidden' name='edu' value='$flag' readonly='readonly' />";
            if(isset($_POST['medical']))
                $flag = 1;
            else $flag = 0;
            echo "<input type='hidden' name='medical' value='$flag' readonly='readonly' />";
            echo "<input type='hidden' name='district' value='$_POST[district]' readonly='readonly' />";
            echo "<input type='hidden' name='city' value='$_POST[city]' readonly='readonly' />";
            echo "<input type='hidden' name='address' value='$_POST[address]' readonly='readonly' />";
            ?>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Name: </label></td>
                <td><input name="conName" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Address: </label></td>
                <td><input name="conAddress" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Phone: </label></td>
                <td><input name="conPhone" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Mobile No: </label></td>
                <td><input name="conMobile" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Fax: </label></td>
                <td><input name="conFax" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="32%" align="right"><label>Email: </label></td>
                <td><input name="conEmail" type="text" width="250%" /></td>
            </tr>
        </table>

    </fieldset>

    <div align="center">
        <input type="submit" value="Next" name="Next" />
    </div>

    <div align="center"></div>
</form>
<?php include 'footer.php'?>