namespace WindowsFormsApplication3
{
    partial class primulForm
    {
        /// <summary>
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
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFileNew = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFileOpen = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFileSave = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFileExit = new System.Windows.Forms.ToolStripMenuItem();
            this.editToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditCut = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditCopy = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditPaste = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditUndo = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditSelectAll = new System.Windows.Forms.ToolStripMenuItem();
            this.mbEditClear = new System.Windows.Forms.ToolStripMenuItem();
            this.formatToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFormatFont = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFormatColor = new System.Windows.Forms.ToolStripMenuItem();
            this.mbFormatBack = new System.Windows.Forms.ToolStripMenuItem();
            this.helpToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mbHelpAbout = new System.Windows.Forms.ToolStripMenuItem();
            this.tbText = new System.Windows.Forms.TextBox();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.editToolStripMenuItem,
            this.formatToolStripMenuItem,
            this.helpToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(697, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mbFileNew,
            this.mbFileOpen,
            this.mbFileSave,
            this.mbFileExit});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "File";
            this.fileToolStripMenuItem.Click += new System.EventHandler(this.fileToolStripMenuItem_Click);
            // 
            // mbFileNew
            // 
            this.mbFileNew.Name = "mbFileNew";
            this.mbFileNew.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.N)));
            this.mbFileNew.Size = new System.Drawing.Size(152, 22);
            this.mbFileNew.Text = "New";
            this.mbFileNew.Click += new System.EventHandler(this.mbFileNew_Click);
            // 
            // mbFileOpen
            // 
            this.mbFileOpen.Name = "mbFileOpen";
            this.mbFileOpen.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.O)));
            this.mbFileOpen.Size = new System.Drawing.Size(152, 22);
            this.mbFileOpen.Text = "Open";
            this.mbFileOpen.Click += new System.EventHandler(this.mbFileOpen_Click);
            // 
            // mbFileSave
            // 
            this.mbFileSave.Name = "mbFileSave";
            this.mbFileSave.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.S)));
            this.mbFileSave.Size = new System.Drawing.Size(152, 22);
            this.mbFileSave.Text = "Save";
            this.mbFileSave.Click += new System.EventHandler(this.mbFileSave_Click);
            // 
            // mbFileExit
            // 
            this.mbFileExit.Name = "mbFileExit";
            this.mbFileExit.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.E)));
            this.mbFileExit.Size = new System.Drawing.Size(152, 22);
            this.mbFileExit.Text = "Exit";
            this.mbFileExit.Click += new System.EventHandler(this.mbFileExit_Click_1);
            // 
            // editToolStripMenuItem
            // 
            this.editToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mbEditCut,
            this.mbEditCopy,
            this.mbEditPaste,
            this.mbEditUndo,
            this.mbEditSelectAll,
            this.mbEditClear});
            this.editToolStripMenuItem.Name = "editToolStripMenuItem";
            this.editToolStripMenuItem.Size = new System.Drawing.Size(39, 20);
            this.editToolStripMenuItem.Text = "Edit";
            // 
            // mbEditCut
            // 
            this.mbEditCut.Name = "mbEditCut";
            this.mbEditCut.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.X)));
            this.mbEditCut.Size = new System.Drawing.Size(174, 22);
            this.mbEditCut.Text = "Cut";
            this.mbEditCut.Click += new System.EventHandler(this.mbEditCut_Click);
            // 
            // mbEditCopy
            // 
            this.mbEditCopy.Name = "mbEditCopy";
            this.mbEditCopy.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.C)));
            this.mbEditCopy.Size = new System.Drawing.Size(174, 22);
            this.mbEditCopy.Text = "Copy";
            this.mbEditCopy.Click += new System.EventHandler(this.mbEditCopy_Click);
            // 
            // mbEditPaste
            // 
            this.mbEditPaste.Name = "mbEditPaste";
            this.mbEditPaste.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.V)));
            this.mbEditPaste.Size = new System.Drawing.Size(174, 22);
            this.mbEditPaste.Text = "Paste";
            this.mbEditPaste.Click += new System.EventHandler(this.mbEditPaste_Click);
            // 
            // mbEditUndo
            // 
            this.mbEditUndo.Name = "mbEditUndo";
            this.mbEditUndo.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.Z)));
            this.mbEditUndo.Size = new System.Drawing.Size(174, 22);
            this.mbEditUndo.Text = "Undo";
            this.mbEditUndo.Click += new System.EventHandler(this.mbEditUndo_Click);
            // 
            // mbEditSelectAll
            // 
            this.mbEditSelectAll.Name = "mbEditSelectAll";
            this.mbEditSelectAll.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.A)));
            this.mbEditSelectAll.Size = new System.Drawing.Size(174, 22);
            this.mbEditSelectAll.Text = "Select All";
            this.mbEditSelectAll.Click += new System.EventHandler(this.mbEditSelectAll_Click);
            // 
            // mbEditClear
            // 
            this.mbEditClear.Name = "mbEditClear";
            this.mbEditClear.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Shift | System.Windows.Forms.Keys.Delete)));
            this.mbEditClear.Size = new System.Drawing.Size(174, 22);
            this.mbEditClear.Text = "Clear All";
            this.mbEditClear.Click += new System.EventHandler(this.mbEditClear_Click);
            // 
            // formatToolStripMenuItem
            // 
            this.formatToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mbFormatFont,
            this.mbFormatColor,
            this.mbFormatBack});
            this.formatToolStripMenuItem.Name = "formatToolStripMenuItem";
            this.formatToolStripMenuItem.Size = new System.Drawing.Size(57, 20);
            this.formatToolStripMenuItem.Text = "Format";
            // 
            // mbFormatFont
            // 
            this.mbFormatFont.Name = "mbFormatFont";
            this.mbFormatFont.Size = new System.Drawing.Size(170, 22);
            this.mbFormatFont.Text = "Font";
            this.mbFormatFont.Click += new System.EventHandler(this.mbFormatFont_Click);
            // 
            // mbFormatColor
            // 
            this.mbFormatColor.Name = "mbFormatColor";
            this.mbFormatColor.Size = new System.Drawing.Size(170, 22);
            this.mbFormatColor.Text = "Text Color";
            this.mbFormatColor.Click += new System.EventHandler(this.mbFormatColor_Click);
            // 
            // mbFormatBack
            // 
            this.mbFormatBack.Name = "mbFormatBack";
            this.mbFormatBack.Size = new System.Drawing.Size(170, 22);
            this.mbFormatBack.Text = "Background Color";
            this.mbFormatBack.Click += new System.EventHandler(this.mbFormatBack_Click);
            // 
            // helpToolStripMenuItem
            // 
            this.helpToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mbHelpAbout});
            this.helpToolStripMenuItem.Name = "helpToolStripMenuItem";
            this.helpToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.helpToolStripMenuItem.Text = "Help";
            // 
            // mbHelpAbout
            // 
            this.mbHelpAbout.Name = "mbHelpAbout";
            this.mbHelpAbout.Size = new System.Drawing.Size(107, 22);
            this.mbHelpAbout.Text = "About";
            this.mbHelpAbout.Click += new System.EventHandler(this.mbHelpAbout_Click);
            // 
            // tbText
            // 
            this.tbText.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tbText.Location = new System.Drawing.Point(0, 24);
            this.tbText.Multiline = true;
            this.tbText.Name = "tbText";
            this.tbText.Size = new System.Drawing.Size(697, 263);
            this.tbText.TabIndex = 1;
            this.tbText.TextChanged += new System.EventHandler(this.tbText_TextChanged);
            // 
            // primulForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(697, 287);
            this.Controls.Add(this.tbText);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "primulForm";
            this.Text = "Aplicatie Notepad";
            this.Load += new System.EventHandler(this.primulForm_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mbFileNew;
        private System.Windows.Forms.ToolStripMenuItem mbFileOpen;
        private System.Windows.Forms.ToolStripMenuItem mbFileSave;
        private System.Windows.Forms.ToolStripMenuItem editToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem formatToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem helpToolStripMenuItem;
        private System.Windows.Forms.TextBox tbText;
        private System.Windows.Forms.ToolStripMenuItem mbEditCut;
        private System.Windows.Forms.ToolStripMenuItem mbEditCopy;
        private System.Windows.Forms.ToolStripMenuItem mbEditPaste;
        private System.Windows.Forms.ToolStripMenuItem mbEditUndo;
        private System.Windows.Forms.ToolStripMenuItem mbEditSelectAll;
        private System.Windows.Forms.ToolStripMenuItem mbFormatFont;
        private System.Windows.Forms.ToolStripMenuItem mbFormatColor;
        private System.Windows.Forms.ToolStripMenuItem mbHelpAbout;
        private System.Windows.Forms.ToolStripMenuItem mbFormatBack;
        private System.Windows.Forms.ToolStripMenuItem mbFileExit;
        private System.Windows.Forms.ToolStripMenuItem mbEditClear;



    }
}

