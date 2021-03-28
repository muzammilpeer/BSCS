<?php defined('_JEXEC') or die('Restricted access'); ?>

<style type="text/css">
<!--
#element-box  {
	overflow:auto !important;
}
-->
</style>

<form action="index.php" method="post" name="adminForm">
<table class="adminlist">
<thead>
    <tr>
            <th width="3%">
                <?php echo JText::_( 'Num' ); ?>
            </th>
			<th width="3%">
				<input type="checkbox" name="toggle" value="" onclick="checkAll(<?php echo count( $this->items ); ?>);" />
			</th>	
			<th width="3%">
				<?php echo JHTML::_('grid.sort', JText::_( 'Published' ), 'published', @$lists['order_Dir'], @$lists['order'] ); ?>
			</th>	
			<?php	$k = 0;
	$n=count( $this->fields );
	for ($i=0; $i < $n; $i++)
	{
		$rowField = $this->fields[$i];
		if ($rowField->typefield != 'button' && $rowField->typefield != 'fieldsep')
		{
 ?>
<th><?php echo  $rowField->label; ?></th>
<?php	
		}
	}
 ?>
			<th width="3%">
				<?php echo JText::_( 'IP Address' ); ?>
			</th>
			<th width="3%">
				<?php echo JText::_( 'ID' ); ?>
			</th>
	</tr>			
</thead>
	<?php
	$k = 0;
	$n=count( $this->items );
	for ($i=0; $i < $n; $i++)
	{	
	
		$row = &$this->items[$i];
		$published	= JHTML::_('grid.published', $row, $i );
		$checked = JHTML::_('grid.id',   $i, $row->id );
		$link = JRoute::_( 'index.php?option=com_ckforms&controller=ckdata&task=detail&fid='.JRequest::getVar( 'fid', -1 ).'&cid[]='. $row->id );

		?>
		<tr class="<?php echo "row$k"; ?>">
			<td>
				<?php echo $i+1; ?>
			</td>
			<td>
				<?php echo $checked; ?>
			</td>            
            <td align="center">
                <?php echo $published;?>
            </td>
<?php
	$z=count( $this->fields );
	for ($j=0; $j < $z; $j++)
	{
		$rowField = $this->fields[$j];
		if ($rowField->typefield != 'button' && $rowField->typefield != 'fieldsep')
		{
			$prop="F".$rowField->id;
			if (isset($row->$prop) == false)
			{
				$prop=$rowField->name;
			}
			if (isset($row->$prop))
			{
				$texte = $row->$prop;
			} else {
				$texte = "&nbsp;";
			}
			if (strlen($texte) > 255) {
				$texte = substr($texte,0,255)."...";
			}
			
			$isEmail = false;
			if ($rowField->typefield == 'text') {
				$opt = explode("[--]", $rowField->defaultvalue);
				$key1 = explode("===", $opt[0]);
				$key2 = explode("===", $opt[1]);
				$key3 = explode("===", $opt[2]);
				$t_texttype = $key3[1];
				
				if ($t_texttype == 'email') {
					$isEmail = true;
				}
				
			}
			
			if ($isEmail == true) 
			{
				$linkfield = "mailto:".$texte;
			} 
			else 
			{
				$linkfield = $link;
			}
 ?>
	<td><?php echo "<a href=\"".$linkfield."\">".$texte."</a>"; ?></td> 
<?php	
		}
	}
 ?>

			<td>
				<?php echo $row->ipaddress; ?>
			</td>
			<td>
				<?php echo $row->id; ?>
			</td>
		</tr>
		<?php
		$k = 1 - $k;
	}
	?>
    
    <tfoot>
    <tr>
      <td colspan="<?php echo (count($this->fields) + 4); ?>"><?php echo $this->pagination->getListFooter(); ?></td>
    </tr>
  </tfoot>

</table> 

    <input type="hidden" name="option" value="com_ckforms" />
    <input type="hidden" name="task" value="" />
    <input type="hidden" name="boxchecked" value="0" />
    <input type="hidden" name="controller" value="ckdata" />
    <input type="hidden" name="fid" value="<?php echo JRequest::getVar( 'fid', -1 ) ?>" />
</form>
<div class="ckformbottom">
	CKForms V1.3.3, &copy; 2008-2009 Copyright by <a href="http://ckforms.cookex.eu" target="_blank" class="smallgrey">Cookex</a>, all rights reserved. 
    CKForms is Free Software released under the GNU/GPL License. 
</div>