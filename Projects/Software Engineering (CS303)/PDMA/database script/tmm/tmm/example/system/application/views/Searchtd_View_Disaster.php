<html>
<head>
<title>Search</title>
</head>
<body>
<?php
     echo validation_errors();
     echo form_open('searchtd/SearchTraining');
     echo form_label('Disaster','Disaster');
     echo form_input('Disaster');
     echo form_submit('Sub','Search');
     form_close();
?>
</body>

