﻿#pragma checksum "..\..\Window1.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "3499EAF06A70E3625EE5A2814C8AC6D5"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.1433
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;


namespace ComputerNetworkProject {
    
    
    /// <summary>
    /// Window1
    /// </summary>
    public partial class Window1 : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 14 "..\..\Window1.xaml"
        internal System.Windows.Controls.Button Scan_btn;
        
        #line default
        #line hidden
        
        
        #line 15 "..\..\Window1.xaml"
        internal System.Windows.Controls.Button test_btn;
        
        #line default
        #line hidden
        
        
        #line 16 "..\..\Window1.xaml"
        internal System.Windows.Controls.ListBox listpc;
        
        #line default
        #line hidden
        
        
        #line 18 "..\..\Window1.xaml"
        internal System.Windows.Controls.TextBox fromip;
        
        #line default
        #line hidden
        
        
        #line 19 "..\..\Window1.xaml"
        internal System.Windows.Controls.TextBox toip;
        
        #line default
        #line hidden
        
        
        #line 20 "..\..\Window1.xaml"
        internal System.Windows.Controls.Menu menu1;
        
        #line default
        #line hidden
        
        
        #line 31 "..\..\Window1.xaml"
        internal System.Windows.Controls.Label label1;
        
        #line default
        #line hidden
        
        
        #line 32 "..\..\Window1.xaml"
        internal System.Windows.Controls.Label label2;
        
        #line default
        #line hidden
        
        
        #line 33 "..\..\Window1.xaml"
        internal System.Windows.Controls.Label label3;
        
        #line default
        #line hidden
        
        
        #line 34 "..\..\Window1.xaml"
        internal System.Windows.Controls.Primitives.StatusBar statusBar1;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/ComputerNetworkProject;component/window1.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\Window1.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.Scan_btn = ((System.Windows.Controls.Button)(target));
            
            #line 14 "..\..\Window1.xaml"
            this.Scan_btn.Click += new System.Windows.RoutedEventHandler(this.Scan_btn_Click);
            
            #line default
            #line hidden
            return;
            case 2:
            this.test_btn = ((System.Windows.Controls.Button)(target));
            
            #line 15 "..\..\Window1.xaml"
            this.test_btn.Click += new System.Windows.RoutedEventHandler(this.test_btn_Click);
            
            #line default
            #line hidden
            return;
            case 3:
            this.listpc = ((System.Windows.Controls.ListBox)(target));
            
            #line 16 "..\..\Window1.xaml"
            this.listpc.SelectionChanged += new System.Windows.Controls.SelectionChangedEventHandler(this.listpc_SelectionChanged);
            
            #line default
            #line hidden
            return;
            case 4:
            this.fromip = ((System.Windows.Controls.TextBox)(target));
            return;
            case 5:
            this.toip = ((System.Windows.Controls.TextBox)(target));
            return;
            case 6:
            this.menu1 = ((System.Windows.Controls.Menu)(target));
            return;
            case 7:
            this.label1 = ((System.Windows.Controls.Label)(target));
            return;
            case 8:
            this.label2 = ((System.Windows.Controls.Label)(target));
            return;
            case 9:
            this.label3 = ((System.Windows.Controls.Label)(target));
            return;
            case 10:
            this.statusBar1 = ((System.Windows.Controls.Primitives.StatusBar)(target));
            return;
            }
            this._contentLoaded = true;
        }
    }
}