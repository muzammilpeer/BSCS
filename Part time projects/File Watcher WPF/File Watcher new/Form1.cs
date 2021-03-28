using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Threading;

namespace File_Watcher_new
{
    public partial class Form1 : Form
    {
        public string filename = "";
        public DateTime time = new DateTime();
        public FileSystemWatcher watcher = new FileSystemWatcher();
        private Thread demoThread1;
        delegate void SetCreateFileCallback(string text);

        public Form1()
        {
            InitializeComponent();
        }


        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                if (programfile.Checked == true)
                {
                    watcher.Path = "C:\\Program Files";
                    MessageBox.Show(" File Watching Start. [Program File] ");
                }
                else if (windows.Checked == true)
                {
                    watcher.Path = "C:\\Windows";
                    MessageBox.Show(" File Watching Start. [Windows]");
                }
                else if (docset.Checked == true)
                {
                    watcher.Path = "C:\\Users";
                    MessageBox.Show(" File Watching Start. [Users]");
                }
                else if (other.Checked)
                {
                    watcher.Path = watchpath.Text;
                    MessageBox.Show(" File Watching Start. [Other]");
                }
                else
                {
                    MessageBox.Show("No Option is selected!");
                }
            }
            catch (ArgumentException ex)
            {
                MessageBox.Show(ex.Message);
            }
            watcher.NotifyFilter = NotifyFilters.LastAccess | NotifyFilters.LastWrite | NotifyFilters.FileName | NotifyFilters.DirectoryName | NotifyFilters.Size | NotifyFilters.Attributes | NotifyFilters.CreationTime | NotifyFilters.Security;
            watcher.Filter = "*.*";
            watcher.Renamed += new RenamedEventHandler(watcher_Renamed);
            watcher.Changed += new FileSystemEventHandler(watcher_Changed);
            watcher.Created += new FileSystemEventHandler(watcher_Changed);
            watcher.Deleted += new FileSystemEventHandler(watcher_Changed);
            watcher.IncludeSubdirectories = true;
            watcher.EnableRaisingEvents = true;
            button1.Hide();
            button2.Show();
        }
        private void watcher_Renamed(object sender, RenamedEventArgs e)
        {
            this.filename = e.OldFullPath + " " + e.ChangeType + " to " + e.FullPath + DateTime.Now.ToString("hh:mm:ss tt");
            this.demoThread1 = new Thread(new ThreadStart(this.ThreadProcUnsafe));
            this.demoThread1.Start();
        }
        private void watcher_Changed(object sender, FileSystemEventArgs e)
        {
            this.filename = e.FullPath + " " + e.ChangeType + " " + DateTime.Now.ToString("hh:mm:ss tt");
            this.demoThread1 = new Thread(new ThreadStart(this.ThreadProcUnsafe));
            this.demoThread1.Start();

        }
        private void ThreadProcUnsafe()
        {
            this.AddItemForCreate(this.filename);
        }

        private void AddItemForCreate(String text)
        {
            // InvokeRequired required compares the thread ID of the
            // calling thread to the thread ID of the creating thread.
            // If these threads are different, it returns true.
            if (this.listbox1.InvokeRequired)
            {
                SetCreateFileCallback d = new SetCreateFileCallback(AddItemForCreate);
                this.Invoke(d, new object[] { text });
            }
            else
            {
                this.listbox1.Items.Add(text);
            }

        }


        private void displaybox(string tst)
        {
            listbox1.Items.Add(tst);
        }

        private void clearing_Click(object sender, EventArgs e)
        {
            listbox1.Items.Clear();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            button1.Show();
            watcher.EnableRaisingEvents = false;
            button2.Hide();
        }
    }
}
