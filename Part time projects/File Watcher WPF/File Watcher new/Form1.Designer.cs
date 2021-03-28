using System.Windows.Forms;
namespace File_Watcher_new
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.listbox1 = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.watchpath = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.programfile = new System.Windows.Forms.RadioButton();
            this.windows = new System.Windows.Forms.RadioButton();
            this.docset = new System.Windows.Forms.RadioButton();
            this.clearing = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.newToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.saveToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.importToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exportToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.editToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.settingToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.helpToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.manualToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutMeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.other = new System.Windows.Forms.RadioButton();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // listbox1
            // 
            this.listbox1.FormattingEnabled = true;
            this.listbox1.HorizontalScrollbar = true;
            this.listbox1.Location = new System.Drawing.Point(24, 116);
            this.listbox1.Name = "listbox1";
            this.listbox1.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.listbox1.Size = new System.Drawing.Size(728, 407);
            this.listbox1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.Window;
            this.label1.Location = new System.Drawing.Point(137, 100);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(83, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "e.g:[ c:\\abc ]";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(166, 69);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "Watch";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // watchpath
            // 
            this.watchpath.Location = new System.Drawing.Point(24, 69);
            this.watchpath.Name = "watchpath";
            this.watchpath.Size = new System.Drawing.Size(136, 20);
            this.watchpath.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.Transparent;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.label2.Location = new System.Drawing.Point(20, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(240, 24);
            this.label2.TabIndex = 4;
            this.label2.Text = "File Watcher Version 0.1";
            // 
            // programfile
            // 
            this.programfile.AutoSize = true;
            this.programfile.BackColor = System.Drawing.Color.Transparent;
            this.programfile.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.programfile.ForeColor = System.Drawing.SystemColors.Window;
            this.programfile.Location = new System.Drawing.Point(275, 72);
            this.programfile.Name = "programfile";
            this.programfile.Size = new System.Drawing.Size(95, 17);
            this.programfile.TabIndex = 5;
            this.programfile.Text = "Program File";
            this.programfile.UseVisualStyleBackColor = false;
            // 
            // windows
            // 
            this.windows.AutoSize = true;
            this.windows.BackColor = System.Drawing.Color.Transparent;
            this.windows.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.windows.ForeColor = System.Drawing.SystemColors.Window;
            this.windows.Location = new System.Drawing.Point(366, 72);
            this.windows.Name = "windows";
            this.windows.Size = new System.Drawing.Size(76, 17);
            this.windows.TabIndex = 6;
            this.windows.Text = "Windows";
            this.windows.UseVisualStyleBackColor = false;
            // 
            // docset
            // 
            this.docset.AutoSize = true;
            this.docset.BackColor = System.Drawing.Color.Transparent;
            this.docset.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.docset.ForeColor = System.Drawing.SystemColors.Window;
            this.docset.Location = new System.Drawing.Point(441, 72);
            this.docset.Name = "docset";
            this.docset.Size = new System.Drawing.Size(87, 17);
            this.docset.TabIndex = 7;
            this.docset.Text = "User(Vista)";
            this.docset.UseVisualStyleBackColor = false;
            // 
            // clearing
            // 
            this.clearing.Location = new System.Drawing.Point(677, 529);
            this.clearing.Name = "clearing";
            this.clearing.Size = new System.Drawing.Size(75, 23);
            this.clearing.TabIndex = 8;
            this.clearing.Text = "Clear";
            this.clearing.UseVisualStyleBackColor = true;
            this.clearing.Click += new System.EventHandler(this.clearing_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(166, 69);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 9;
            this.button2.Text = "Stop Watch";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.editToolStripMenuItem,
            this.helpToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(784, 24);
            this.menuStrip1.TabIndex = 10;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.newToolStripMenuItem,
            this.openToolStripMenuItem,
            this.saveToolStripMenuItem,
            this.importToolStripMenuItem,
            this.exportToolStripMenuItem,
            this.exitToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // newToolStripMenuItem
            // 
            this.newToolStripMenuItem.Name = "newToolStripMenuItem";
            this.newToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.newToolStripMenuItem.Text = "New";
            // 
            // openToolStripMenuItem
            // 
            this.openToolStripMenuItem.Name = "openToolStripMenuItem";
            this.openToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.openToolStripMenuItem.Text = "Open";
            // 
            // saveToolStripMenuItem
            // 
            this.saveToolStripMenuItem.Name = "saveToolStripMenuItem";
            this.saveToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.saveToolStripMenuItem.Text = "Save";
            this.saveToolStripMenuItem.Click += new System.EventHandler(this.saveToolStripMenuItem_Click);
            // 
            // importToolStripMenuItem
            // 
            this.importToolStripMenuItem.Name = "importToolStripMenuItem";
            this.importToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.importToolStripMenuItem.Text = "Import";
            // 
            // exportToolStripMenuItem
            // 
            this.exportToolStripMenuItem.Name = "exportToolStripMenuItem";
            this.exportToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.exportToolStripMenuItem.Text = "Export";
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(110, 22);
            this.exitToolStripMenuItem.Text = "Exit";
            this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitToolStripMenuItem_Click);
            // 
            // editToolStripMenuItem
            // 
            this.editToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.settingToolStripMenuItem});
            this.editToolStripMenuItem.Name = "editToolStripMenuItem";
            this.editToolStripMenuItem.Size = new System.Drawing.Size(39, 20);
            this.editToolStripMenuItem.Text = "Edit";
            // 
            // settingToolStripMenuItem
            // 
            this.settingToolStripMenuItem.Name = "settingToolStripMenuItem";
            this.settingToolStripMenuItem.Size = new System.Drawing.Size(111, 22);
            this.settingToolStripMenuItem.Text = "Setting";
            // 
            // helpToolStripMenuItem
            // 
            this.helpToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.manualToolStripMenuItem,
            this.aboutMeToolStripMenuItem});
            this.helpToolStripMenuItem.Name = "helpToolStripMenuItem";
            this.helpToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.helpToolStripMenuItem.Text = "Help";
            // 
            // manualToolStripMenuItem
            // 
            this.manualToolStripMenuItem.Name = "manualToolStripMenuItem";
            this.manualToolStripMenuItem.Size = new System.Drawing.Size(127, 22);
            this.manualToolStripMenuItem.Text = "Manual";
            // 
            // aboutMeToolStripMenuItem
            // 
            this.aboutMeToolStripMenuItem.Name = "aboutMeToolStripMenuItem";
            this.aboutMeToolStripMenuItem.Size = new System.Drawing.Size(127, 22);
            this.aboutMeToolStripMenuItem.Text = "About Me";
            // 
            // other
            // 
            this.other.AutoSize = true;
            this.other.BackColor = System.Drawing.Color.Transparent;
            this.other.Checked = true;
            this.other.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.other.ForeColor = System.Drawing.SystemColors.Window;
            this.other.Location = new System.Drawing.Point(534, 73);
            this.other.Name = "other";
            this.other.Size = new System.Drawing.Size(56, 17);
            this.other.TabIndex = 11;
            this.other.TabStop = true;
            this.other.Text = "Other";
            this.other.UseVisualStyleBackColor = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::File_Watcher_new.Properties.Resources.windows_vista_aurora_wallpaper;
            this.ClientSize = new System.Drawing.Size(784, 564);
            this.Controls.Add(this.other);
            this.Controls.Add(this.clearing);
            this.Controls.Add(this.docset);
            this.Controls.Add(this.windows);
            this.Controls.Add(this.programfile);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.watchpath);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listbox1);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.menuStrip1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "File Watcher By Macer Mx";
            this.TransparencyKey = System.Drawing.SystemColors.WindowFrame;
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        void saveToolStripMenuItem_Click(object sender, System.EventArgs e)
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();
            saveFileDialog1.Filter = "Text File|*.txt|Log File|*.log|XML File|*.xml";
            saveFileDialog1.Title = "Save Report Log File";
            saveFileDialog1.ShowDialog();
            if (saveFileDialog1.FileName != "")
            {
                switch (saveFileDialog1.FilterIndex)
                {
                    case 1: 
                        {
                            System.IO.StreamWriter sw = new System.IO.StreamWriter(saveFileDialog1.OpenFile());
                            foreach (System.Object strObject in listbox1.Items)
                            {
                                sw.WriteLine(strObject.ToString());
                            }
                            sw.Close();
                        } break;
                    case 2:
                        {
                        } break;
                    case 3:
                        {
                            try
                            {
                                //pick whatever filename with .xml extension
                                string filepath = "report.xml";
                                filepath = saveFileDialog1.FileName;
                                System.Xml.XmlDocument xmlDoc = new System.Xml.XmlDocument();

                                try
                                {
                                    xmlDoc.Load(filepath);
                                }
                                catch (System.IO.FileNotFoundException)
                                {
                                    //if file is not found, create a new xml file
                                    System.Xml.XmlTextWriter xmlWriter = new System.Xml.XmlTextWriter(filepath, System.Text.Encoding.UTF8);
                                    xmlWriter.Formatting = System.Xml.Formatting.Indented;
                                    xmlWriter.WriteProcessingInstruction("xml", "version='1.0' encoding='UTF-8'");
                                    xmlWriter.WriteStartElement("FileWatcherRoot");
                                    //If WriteProcessingInstruction is used as above,
                                    //Do not use WriteEndElement() here
                                    //xmlWriter.WriteEndElement();
                                    //it will cause the &ltRoot></Root> to be &ltRoot />
                                    xmlWriter.Close();
                                    xmlDoc.Load(filepath);
                                }
                                string category = "";
                                if (windows.Checked)
                                {
                                    category = "Windows";
                                }
                                else if (programfile.Checked)
                                {
                                    category = "ProgramFile";
                                }
                                else if (docset.Checked)
                                {
                                    category = "Document&Setting";
                                }
                                else if (other.Checked)
                                {
                                    category = "Other";
                                }

                                string datastr = "Query";
                                foreach (System.Object strObject in listbox1.Items)
                                {

                                    System.Xml.XmlNode root = xmlDoc.DocumentElement;
                                    System.Xml.XmlElement childNode = xmlDoc.CreateElement(category);
                                    System.Xml.XmlElement childNode2 = xmlDoc.CreateElement(datastr);
                                    System.Xml.XmlText textNode = xmlDoc.CreateTextNode("hello");
                                    textNode.Value = "First";

                                    root.AppendChild(childNode);
                                    childNode.AppendChild(childNode2);
                                    childNode2.SetAttribute("Name", category);
                                    childNode2.AppendChild(textNode);

                                    textNode.Value = strObject.ToString();
                                }
                                 xmlDoc.Save(filepath);
                            }
                            catch (System.Exception ex)
                            {
                                MessageBox.Show(ex.ToString());
                            }



                        } break;
                }
           }
          } 

        void exitToolStripMenuItem_Click(object sender, System.EventArgs e)
        {
            Close();
        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox watchpath;
        public System.Windows.Forms.ListBox listbox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.RadioButton programfile;
        private System.Windows.Forms.RadioButton windows;
        private System.Windows.Forms.RadioButton docset;
        private System.Windows.Forms.Button clearing;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem newToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem saveToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem importToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exportToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem editToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem settingToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem helpToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem manualToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem aboutMeToolStripMenuItem;
        private System.Windows.Forms.RadioButton other;
    }
}

