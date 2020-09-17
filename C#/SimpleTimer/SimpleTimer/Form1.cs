using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace SimpleTimer
{
    public partial class SimpleTimer : Form
    {
        private int hours = 23;
        private int minutes = 59;
        private int seconds = 50;

        private string mode = "user";
        //private string mode = "test";

        bool isStart = false;
        //bool isReset = false;
        bool isPaused = false;

        public SimpleTimer()
        {
            InitializeComponent();
        }

        private void StartButton_Click(object sender, EventArgs e)
        {
            if(mode == "user")
            {
                hours = 0;
                minutes = 0;
                seconds = 0;
            }

            isStart = true;
            startButton.Enabled = false;

            while (isStart)
            {              
                ChangeTextToString(Second, seconds);
                ChangeTextToString(Minute, minutes);
                ChangeTextToString(Hour, hours);

                if(isPaused)
                {
                    isPaused = false;
                    pauseButton.Enabled = true;
                }

                if (minutes > 59 || seconds > 59)
                {
                    if (minutes > 59)
                    {
                        minutes = 0;
                        hours++;
                        ChangeTextToString(Hour, hours);
                    }

                    else if (seconds > 59)
                    {
                        minutes++;
                    }

                    seconds = 0;

                    ChangeTextToString(Second, seconds);
                    ChangeTextToString(Minute, minutes);
                }

                else if(hours > 23)
                {
                    isStart = false;
                    startButton.Enabled = true;

                    if(mode == "test")
                    {
                        mode = "user";
                    }
                }

                else
                {
                    seconds++;
                    DelaySystem();
                }
            }
        }

        private void ChangeTextToString(Label label, int integer)
        {
            if(integer < 10)
            {
                label.Text = "0" + integer.ToString();
            }

            else
            {
                label.Text = integer.ToString();
            }
        }

        private void DelaySystem()
        {
            Thread.Sleep(1000);
            Application.DoEvents();
        }

        private void PauseButton_Click(object sender, EventArgs e)
        {
            isStart = false;
            isPaused = true;

            pauseButton.Enabled = false;
            startButton.Enabled = true;
        }

        private void ResetButton_Click(object sender, EventArgs e)
        {
            seconds = 0;
            minutes = 0;
            hours = 0;
        }
    }
}
