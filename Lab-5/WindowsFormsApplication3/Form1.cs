using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Threading.Tasks;

namespace WindowsFormsApplication3
{
    public partial class primulForm : Form
    {
        public primulForm()
        {
            InitializeComponent();
        }

        private void primulForm_Load(object sender, EventArgs e)
        {
            Text = "Aplicatie Notepad";
        }

        private void mbFileNew_Click(object sender, EventArgs e)
        {
            if (tbText.Text.Length > 0)
            {
                DialogResult rezultatIntrebare = MessageBox.Show("Vrei sa salvezi continutul existent?", "Intrebare", MessageBoxButtons.YesNo);
                if (rezultatIntrebare == System.Windows.Forms.DialogResult.Yes)
                {
                    IntreabaCaleFisiersiSalveaza();
                }
                tbText.Text = "";
            }
        }

        private void mbFileOpen_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog();
            DialogResult rezultatDialog = dialog.ShowDialog();
            if(rezultatDialog == System.Windows.Forms.DialogResult.OK)
            {
                string continutFisier = File.ReadAllText(dialog.FileName);
                tbText.Text = continutFisier;
            }
        }

        private void mbFileSave_Click(object sender, EventArgs e)
        {
            IntreabaCaleFisiersiSalveaza();
        }

        private void IntreabaCaleFisiersiSalveaza()
        {
            SaveFileDialog dialog = new SaveFileDialog();
            DialogResult rezultatDialog = dialog.ShowDialog();
            if (rezultatDialog == System.Windows.Forms.DialogResult.OK)
            {
                string numeFisier = dialog.FileName;
                File.WriteAllText(numeFisier, tbText.Text);
                MessageBox.Show("Fisierul a fost salvat cu succes");
            }
        }

        private void mbEditCut_Click(object sender, EventArgs e)
        {
            tbText.Cut();
        }

        private void mbEditCopy_Click(object sender, EventArgs e)
        {
            tbText.Copy();
        }

        private void mbEditPaste_Click(object sender, EventArgs e)
        {
            tbText.Paste();
        }

        private void mbEditUndo_Click(object sender, EventArgs e)
        {
            tbText.Undo();
        }

        private void mbEditSelectAll_Click(object sender, EventArgs e)
        {
            tbText.SelectAll();
        }

        private void mbFormatFont_Click(object sender, EventArgs e)
        {
            FontDialog fd = new FontDialog();
            if (fd.ShowDialog() == DialogResult.OK)
                tbText.Font = fd.Font;
        }

        private void mbFormatColor_Click(object sender, EventArgs e)
        {
            ColorDialog cd = new ColorDialog();
            if (cd.ShowDialog() == DialogResult.OK) ;
            tbText.ForeColor = cd.Color;
        }

        private void mbHelpAbout_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Aceasta aplicatie este realizata de catre studentul Golovatic Dan grupa TI-151","Help",MessageBoxButtons.OK,MessageBoxIcon.Information);
        }

        private void mbFormatBack_Click(object sender, EventArgs e)
        {
            ColorDialog cd = new ColorDialog();
            if (cd.ShowDialog() == DialogResult.OK) ;
            tbText.BackColor = cd.Color;
        }

        private void mbFileExit_Click_1(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void mbEditClear_Click(object sender, EventArgs e)
        {
            tbText.Clear();
        }

        private void tbText_TextChanged(object sender, EventArgs e)
        {

        }

        private void fileToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

    }
}
