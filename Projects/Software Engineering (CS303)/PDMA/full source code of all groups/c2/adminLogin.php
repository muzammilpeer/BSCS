<?php include 'header.php' ?>
<table width="81%" bgcolor="silver" align="center">
    <tbody>
        <tr>
            <td align="center">
                <br class="item_divider" />
                <form name="admin" action="admin.php" method="POST">
                    Administrator:<input type="password" name="admin" value="" size="20" />
                    Password:<input type="password" name="pword" value="" size="20" />
                    <input type="submit" value="OK" name="ok" />
                </form>
            </td>
        </tr>
    </tbody>
</table>

<?php include 'footer.php' ?>