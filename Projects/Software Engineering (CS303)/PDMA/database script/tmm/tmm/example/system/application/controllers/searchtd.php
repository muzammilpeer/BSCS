<?php

Class Searchtd extends Controller
{
    function Searchtd()
    {
        parent:: Controller();
        $this->load->model('Searchtd_Model');
        $this->load->helper('form');
        $this->load->helper('url');
    }

    function index()
    {
 //       $Disasters['disaster'] = $this->Searchtd_Model->GetDisasters();
        $this->load->view('Searchtd_View');
    }

    function Searchtd_View_Disaster()
    {
        $this->load->view('Searchtd_View_Disaster');
    }

    function Searchtd_View_District()
    {
        $this->load->view('Searchtd_View_District');
    }

    function SearchTraining()
    {
        $disaster = $_POST['Disaster'];
        echo $disaster;
        $Details['dishashter'] = $this->Searchtd_Model->GetTrainingDetails($disaster);
        $this->load->view('Show_Details', $Details);
    }

    function SearchTrainingForDistrict()
    {
        $district = $_POST['District'];
        echo $district;
        $Details['dishtrict'] = $this->Searchtd_Model->GetTrainingDetailsForDistrict($district);
        $this->load->view('Show_Details_For_District', $Details);
    }
}



?>
