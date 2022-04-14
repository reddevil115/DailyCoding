namespace SimpleTimer
{
    partial class SimpleTimer
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.Hour = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.Minute = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.Second = new System.Windows.Forms.Label();
            this.startButton = new System.Windows.Forms.Button();
            this.resetButton = new System.Windows.Forms.Button();
            this.pauseButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Hour
            // 
            this.Hour.AutoSize = true;
            this.Hour.Font = new System.Drawing.Font("굴림", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Hour.Location = new System.Drawing.Point(12, 55);
            this.Hour.Name = "Hour";
            this.Hour.Size = new System.Drawing.Size(102, 64);
            this.Hour.TabIndex = 0;
            this.Hour.Text = "00";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(111, 55);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(49, 64);
            this.label2.TabIndex = 2;
            this.label2.Text = ":";
            // 
            // Minute
            // 
            this.Minute.AutoSize = true;
            this.Minute.Font = new System.Drawing.Font("굴림", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Minute.Location = new System.Drawing.Point(149, 55);
            this.Minute.Name = "Minute";
            this.Minute.Size = new System.Drawing.Size(102, 64);
            this.Minute.TabIndex = 3;
            this.Minute.Text = "00";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("굴림", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(244, 55);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(49, 64);
            this.label5.TabIndex = 5;
            this.label5.Text = ":";
            // 
            // Second
            // 
            this.Second.AutoSize = true;
            this.Second.Font = new System.Drawing.Font("굴림", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.Second.Location = new System.Drawing.Point(281, 55);
            this.Second.Name = "Second";
            this.Second.Size = new System.Drawing.Size(102, 64);
            this.Second.TabIndex = 6;
            this.Second.Text = "00";
            // 
            // startButton
            // 
            this.startButton.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.startButton.Location = new System.Drawing.Point(23, 139);
            this.startButton.Name = "startButton";
            this.startButton.Size = new System.Drawing.Size(113, 43);
            this.startButton.TabIndex = 7;
            this.startButton.Text = "START";
            this.startButton.UseVisualStyleBackColor = true;
            this.startButton.Click += new System.EventHandler(this.StartButton_Click);
            // 
            // resetButton
            // 
            this.resetButton.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.resetButton.Location = new System.Drawing.Point(271, 139);
            this.resetButton.Name = "resetButton";
            this.resetButton.Size = new System.Drawing.Size(112, 43);
            this.resetButton.TabIndex = 8;
            this.resetButton.Text = "RESET";
            this.resetButton.UseVisualStyleBackColor = true;
            this.resetButton.Click += new System.EventHandler(this.ResetButton_Click);
            // 
            // pauseButton
            // 
            this.pauseButton.Font = new System.Drawing.Font("굴림", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.pauseButton.Location = new System.Drawing.Point(142, 139);
            this.pauseButton.Name = "pauseButton";
            this.pauseButton.Size = new System.Drawing.Size(123, 43);
            this.pauseButton.TabIndex = 9;
            this.pauseButton.Text = "PAUSE";
            this.pauseButton.UseVisualStyleBackColor = false;
            this.pauseButton.Click += new System.EventHandler(this.PauseButton_Click);
            // 
            // SimpleTimer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(404, 194);
            this.Controls.Add(this.pauseButton);
            this.Controls.Add(this.resetButton);
            this.Controls.Add(this.startButton);
            this.Controls.Add(this.Second);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.Minute);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Hour);
            this.Name = "SimpleTimer";
            this.Text = "SimpleTimer";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Hour;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label Minute;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label Second;
        private System.Windows.Forms.Button startButton;
        private System.Windows.Forms.Button resetButton;
        private System.Windows.Forms.Button pauseButton;
    }
}

