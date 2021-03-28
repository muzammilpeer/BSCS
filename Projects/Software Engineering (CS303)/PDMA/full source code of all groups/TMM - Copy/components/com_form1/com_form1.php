<?php
//don't allow other scripts to grab and execute our file
defined('_JEXEC') or die('Direct Access to this location is not allowed.');
?>

<table width="456" height="224" border="1">
  <tr>
    <td colspan="2"><h4>ADD TRAINING</h4></td>
  </tr>
  <tr>
    <td width="148">Description</td>
    <td width="292"><form id="form1" name="form1" method="post" action="">
      <label>
        <textarea name="textfield" id="textfield"></textarea>
      </label>
    </form></td>
  </tr>
  <tr>
    <td>Disaster</td>
    <td><form id="form2" name="form2" method="post" action="">
      <table width="137">
        <tr>
          <td width="129"><label>
            <input type="checkbox" name="CheckboxGroup1" value="checkbox" id="CheckboxGroup1_0" />
            Tsunami</label></td>
        </tr>
        <tr>
          <td><label>
            <input type="checkbox" name="CheckboxGroup1" value="checkbox" id="CheckboxGroup1_1" />
            Floods</label></td>
        </tr>
        <tr>
          <td><label>
            <input type="checkbox" name="CheckboxGroup1" value="checkbox" id="CheckboxGroup1_2" />
            Cyclones</label></td>
        </tr>
        <tr>
          <td><label>
            <input type="checkbox" name="CheckboxGroup1" value="checkbox" id="CheckboxGroup1_3" />
            Earthquakes</label></td>
        </tr>
        <tr>
          <td><label>
            <input type="checkbox" name="CheckboxGroup1" value="checkbox" id="CheckboxGroup1_4" />
            Bomb Blasts
          </label></td>
        </tr>
      </table>
      <a href="#">Check All</a>
</form></td>
  </tr>
  <tr>
    <td>District</td>
    <td><form id="form3" name="form3" method="post" action="">
      <label>
        <select name="District" id="District">
          <option>Badin</option>
          <option>Thatta</option>
          <option>Sanghar</option>
          <option>Khairpur</option>
          <option>Sukkur</option>
          <option>Nawabshah</option>
          <option selected="selected">Choose District ..</option>
        </select>
      </label>
    </form></td>
  </tr>
  <tr>
    <td colspan="2"><form id="form4" name="form4" method="post" action="">
      <label>
        <div align="center">
          <input type="submit" name="button" id="button" value="Submit" />
        </div>
      </label>
    </form></td>
  </tr>
</table>
<p>&nbsp;</p>