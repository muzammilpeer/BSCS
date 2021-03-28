<?php //include 'header.php';

session_start();
if(isset($_SESSION['user']))
    session_destroy() ;?>
<table width="81%" bgcolor="silver" align="center">
    <tbody>
        <tr>
            <td align="center">
                <br class="item_divider" />
                <form name="admin" action="userLogin.php" method="POST">
                    <table border="0" width="10" cellspacing="5" cellpadding="5">
                        <tbody>
                            <tr>
                                <td>User Name:</td>
                                <td><input type="text" name="username" value="" /></td>
                            </tr>
                            <tr>
                                <td>Password:</td>
                                <td><input type="password" name="pass" value="" /></td>
                            </tr>
                        </tbody>
                    </table>
                    <input type="submit" value="LOGIN" name="login" />
                </form>
            </td>
        </tr>
    </tbody>
</table>

<?php include 'footer.php' ?>
