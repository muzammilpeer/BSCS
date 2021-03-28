<html>
<head>
<title>Login</title>
</head>
<body>
<?php

     echo validation_errors();
     echo form_open('searchtd/SearchTrainingForDistrict');
     echo form_label('District','District');
     echo form_input('District');
     echo form_submit('Submit','Search');
     form_close();

?>

</body>
</html>