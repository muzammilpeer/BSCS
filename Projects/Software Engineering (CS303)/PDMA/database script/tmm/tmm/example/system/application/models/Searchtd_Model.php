<?php
class Searchtd_Model extends Model
{
    function __construct()
    {
        parent::Model();
	  $this->load->database();
    }

   
public function GetDisasters()
{
    $Disasters=$this->db->query("Select F1 from jos_ckforms_1");
    return ($Disasters->Result_array());
}

public function GetTrainingDetails($disaster)
{
    $Details = $this->db->query("SELECT A.F1, B.F5, C.F8, C.F9, C.F10, C.F11, C.F12 from jos_ckforms_1 A, jos_ckforms_2 B, jos_ckforms_3 C
WHERE A.F1=\"".$disaster."\" and A.F1=B.F6 and B.F5=C.F17");
    return ($Details->Result_array());
}

public function GetTrainingDetailsForDistrict($district)
{
    $Details = $this->db->query("SELECT C.F8, B.F5, A.F1, C.F9, C.F10, C.F11, C.F12 from jos_ckforms_1 A, jos_ckforms_2 B, jos_ckforms_3 C
WHERE C.F8 = \"".$district."\" and A.F1=B.F6 and B.F5=C.F17");
    return ($Details->Result_array());
}

}
?>
