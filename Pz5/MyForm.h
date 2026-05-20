#pragma once

namespace Pz5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ helpToolStripButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ≥ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ˇToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÚ‚ÓËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚≥‰ÍËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËﬂÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÛÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡‚Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ≥ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë≥Á‡ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚ÒÚ‡‚ËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÙÓÏ‡ÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ¯ËÙÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ËÁ‡ÈÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÙÓÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰Ó‚≥‰Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë≥Á‡ÚËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÍÓÔ≥˛‚‡ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚ÒÚ‡‚ËÚËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ¯ËÙÚToolStripMenuItem1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÚ‚ÓËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚≥‰ÍËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->‰ÛÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡‚Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ≥ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚Ë≥Á‡ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÙÓÏ‡ÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->¯ËÙÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ËÁ‡ÈÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÙÓÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰Ó‚≥‰Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->‚Ë≥Á‡ÚËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->¯ËÙÚToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(21) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3, this->toolStripSeparator2, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripSeparator3,
					this->toolStripButton7, this->toolStripButton8, this->toolStripSeparator4, this->helpToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(784, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(29, 24);
			this->newToolStripButton->Text = L"&New";
			this->newToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::newToolStripButton_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(29, 24);
			this->openToolStripButton->Text = L"&Open";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(29, 24);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripButton_Click);
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(29, 24);
			this->printToolStripButton->Text = L"&Print";
			this->printToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::printToolStripButton_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(29, 24);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(29, 24);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(29, 24);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Î≥‚ÓÏÛ Í‡˛";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ ÒÂÂ‰ËÌ≥ ";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Ô‡‚ÓÏÛ Í‡˛";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 24);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"∆ËÌËÈ ¯ËÙÚ";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"œÓıËÎËÈ ÚÂÍÒÚ";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 24);
			this->toolStripButton6->Text = L"œ≥‰ÍÂÒÎÂÌËÈ ÚÂÍÒÚ";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"œÓ‚ÚÓËÚË";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 24);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->ToolTipText = L"œÓ‚ÂÌÛÚË";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 27);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(29, 24);
			this->helpToolStripButton->Text = L"He&lp";
			this->helpToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(784, 358);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 387);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(784, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Ù‡ÈÎToolStripMenuItem,
					this->Ô‡ÌÂÎ≥ToolStripMenuItem, this->Ô‡‚Í‡ToolStripMenuItem, this->ÙÓÏ‡ÚToolStripMenuItem, this->‰ËÁ‡ÈÌToolStripMenuItem, this->‰Ó‚≥‰Í‡ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ÒÚ‚ÓËÚËToolStripMenuItem,
					this->‚≥‰ÍËÚËToolStripMenuItem, this->Á·ÂÂ„ÚËToolStripMenuItem, this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem, this->toolStripMenuItem1,
					this->‰ÛÍToolStripMenuItem
			});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ÒÚ‚ÓËÚËToolStripMenuItem
			// 
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Name = L"ÒÚ‚ÓËÚËToolStripMenuItem";
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Text = L"—Ú‚ÓËÚË";
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripButton_Click);
			// 
			// ‚≥‰ÍËÚËToolStripMenuItem
			// 
			this->‚≥‰ÍËÚËToolStripMenuItem->Name = L"‚≥‰ÍËÚËToolStripMenuItem";
			this->‚≥‰ÍËÚËToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->‚≥‰ÍËÚËToolStripMenuItem->Text = L"¬≥‰ÍËÚË";
			this->‚≥‰ÍËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripButton_Click);
			// 
			// Á·ÂÂ„ÚËToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËToolStripMenuItem->Name = L"Á·ÂÂ„ÚËToolStripMenuItem";
			this->Á·ÂÂ„ÚËToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->Á·ÂÂ„ÚËToolStripMenuItem->Text = L"«·ÂÂ„ÚË";
			// 
			// Á·ÂÂ„ÚËﬂÍToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Name = L"Á·ÂÂ„ÚËﬂÍToolStripMenuItem";
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Text = L"«·ÂÂ„ÚË ˇÍ";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(221, 6);
			// 
			// ‰ÛÍToolStripMenuItem
			// 
			this->‰ÛÍToolStripMenuItem->Name = L"‰ÛÍToolStripMenuItem";
			this->‰ÛÍToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->‰ÛÍToolStripMenuItem->Text = L"ƒÛÍ";
			this->‰ÛÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‰ÛÍToolStripMenuItem_Click);
			// 
			// Ô‡ÌÂÎ≥ToolStripMenuItem
			// 
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem });
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Name = L"Ô‡ÌÂÎ≥ToolStripMenuItem";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Text = L"œÂÂ„Îˇ‰";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ô‡ÌÂÎ≥ToolStripMenuItem_Click);
			// 
			// ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem
			// 
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ˇToolStripMenuItem,
					this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1
			});
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Name = L"ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Text = L"œ‡ÌÂÎ≥";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click);
			// 
			// ˇToolStripMenuItem
			// 
			this->ˇToolStripMenuItem->CheckOnClick = true;
			this->ˇToolStripMenuItem->Name = L"ˇToolStripMenuItem";
			this->ˇToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ˇToolStripMenuItem->Text = L"œ‡ÌÂÎ¸ ≥ÌÒÚÛÏÂÌÚ≥‚";
			this->ˇToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ˇToolStripMenuItem_CheckedChanged);
			// 
			// ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1
			// 
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1->CheckOnClick = true;
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1->Name = L"ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1->Size = System::Drawing::Size(236, 26);
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem1->Text = L"–ˇ‰ÓÍ ÒÚ‡ÌÛ";
			// 
			// Ô‡‚Í‡ToolStripMenuItem
			// 
			this->Ô‡‚Í‡ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Ô‡ÌÂÎ≥ToolStripMenuItem1,
					this->‚Ë≥Á‡ÚËToolStripMenuItem, this->‚ÒÚ‡‚ËÚËToolStripMenuItem
			});
			this->Ô‡‚Í‡ToolStripMenuItem->Name = L"Ô‡‚Í‡ToolStripMenuItem";
			this->Ô‡‚Í‡ToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->Ô‡‚Í‡ToolStripMenuItem->Text = L"œ‡‚Í‡";
			// 
			// Ô‡ÌÂÎ≥ToolStripMenuItem1
			// 
			this->Ô‡ÌÂÎ≥ToolStripMenuItem1->Name = L"Ô‡ÌÂÎ≥ToolStripMenuItem1";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->Ô‡ÌÂÎ≥ToolStripMenuItem1->Text = L" ÓÔ≥˛‚‡ÚË";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// ‚Ë≥Á‡ÚËToolStripMenuItem
			// 
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Name = L"‚Ë≥Á‡ÚËToolStripMenuItem";
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Text = L"¬Ë≥Á‡ÚË";
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// ‚ÒÚ‡‚ËÚËToolStripMenuItem
			// 
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Name = L"‚ÒÚ‡‚ËÚËToolStripMenuItem";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Text = L"¬ÒÚ‡‚ËÚË";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// ÙÓÏ‡ÚToolStripMenuItem
			// 
			this->ÙÓÏ‡ÚToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->¯ËÙÚToolStripMenuItem });
			this->ÙÓÏ‡ÚToolStripMenuItem->Name = L"ÙÓÏ‡ÚToolStripMenuItem";
			this->ÙÓÏ‡ÚToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->ÙÓÏ‡ÚToolStripMenuItem->Text = L"‘ÓÏ‡Ú";
			// 
			// ¯ËÙÚToolStripMenuItem
			// 
			this->¯ËÙÚToolStripMenuItem->Name = L"¯ËÙÚToolStripMenuItem";
			this->¯ËÙÚToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->¯ËÙÚToolStripMenuItem->Text = L"ÿËÙÚ";
			this->¯ËÙÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::¯ËÙÚToolStripMenuItem_Click);
			// 
			// ‰ËÁ‡ÈÌToolStripMenuItem
			// 
			this->‰ËÁ‡ÈÌToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÙÓÌToolStripMenuItem });
			this->‰ËÁ‡ÈÌToolStripMenuItem->Name = L"‰ËÁ‡ÈÌToolStripMenuItem";
			this->‰ËÁ‡ÈÌToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->‰ËÁ‡ÈÌToolStripMenuItem->Text = L"ƒËÁ‡ÈÌ";
			// 
			// ÙÓÌToolStripMenuItem
			// 
			this->ÙÓÌToolStripMenuItem->Name = L"ÙÓÌToolStripMenuItem";
			this->ÙÓÌToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ÙÓÌToolStripMenuItem->Text = L"‘ÓÌ";
			this->ÙÓÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÙÓÌToolStripMenuItem_Click);
			// 
			// ‰Ó‚≥‰Í‡ToolStripMenuItem
			// 
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem });
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Name = L"‰Ó‚≥‰Í‡ToolStripMenuItem";
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Text = L"ƒÓ‚≥‰Í‡";
			// 
			// ≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem
			// 
			this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem->Name = L"≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem";
			this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem->Size = System::Drawing::Size(297, 26);
			this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem->Text = L"≤ÌÙÓÏ‡ˆ≥ˇ ÔÓ ÓÁÓ·ÌËÍ≥‚";
			this->≥ÌÙÓÏ‚ˆ≥ˇœÓ–ÓÁÓ·ÌËÍ≥‚ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->‚Ë≥Á‡ÚËToolStripMenuItem1,
					this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem, this->‚ÒÚ‡‚ËÚËToolStripMenuItem1, this->¯ËÙÚToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(153, 100);
			// 
			// ‚Ë≥Á‡ÚËToolStripMenuItem1
			// 
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Name = L"‚Ë≥Á‡ÚËToolStripMenuItem1";
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Text = L"¬Ë≥Á‡ÚË";
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// ÍÓÔ≥˛‚‡ÚËToolStripMenuItem
			// 
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Name = L"ÍÓÔ≥˛‚‡ÚËToolStripMenuItem";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Text = L" ÓÔ≥˛‚‡ÚË";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// ‚ÒÚ‡‚ËÚËToolStripMenuItem1
			// 
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem1->Name = L"‚ÒÚ‡‚ËÚËToolStripMenuItem1";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem1->Text = L"¬ÒÚ‡‚ËÚË";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// ¯ËÙÚToolStripMenuItem1
			// 
			this->¯ËÙÚToolStripMenuItem1->Name = L"¯ËÙÚToolStripMenuItem1";
			this->¯ËÙÚToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->¯ËÙÚToolStripMenuItem1->Text = L"ÿËÙÚ";
			this->¯ËÙÚToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::¯ËÙÚToolStripMenuItem_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 413);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";

			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
		toolStripStatusLabel1->Text = "¬Ë≥Á‡ÚË";
	}

private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
	toolStripStatusLabel1->Text = "¬ÒÚ‡‚ËÚË";
}
private: System::Void helpToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("¬ËÍÓÌ‡ÎË  ‡Ï‡ ¿ÌÌ‡ Ú‡ œ‡ÔÎ≥ÌÒ¸Í‡ ≤ËÌ‡", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
	toolStripStatusLabel1->Text = "≤ÌÙÓÏ‡ˆ≥ˇ";
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Î≥‚ÓÏÛ Í‡˛";
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ ˆÂÌÚÛ";
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Ô‡‚ÓÏÛ Í‡˛";
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1 -> SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);

	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1 -> SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
	toolStripStatusLabel1->Text = "∆ËÌËÈ ¯ËÙÚ";
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Italic)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Italic);

	else
	{
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
		toolStripStatusLabel1->Text = " ÛÒË‚";
	}
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionFont->Underline)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Underline);
	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
	toolStripStatusLabel1->Text = "œ≥‰ÍÂÒÎÂÌËÈ ÚÂÍÒÚ";
}
private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
	toolStripStatusLabel1->Text = "œÓ‚ÂÌÂÌÌˇ";
}
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Redo();
	toolStripStatusLabel1->Text = "œÓ‚ÚÓËÚË";
}
private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
	toolStripStatusLabel1->Text = " ÓÔ≥˛‚‡ÚË";
}
private: System::Void newToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	toolStripStatusLabel1->Text = "ÕÓ‚ËÈ ‰ÓÍÛÏÂÌÚ";
}
private: System::Void openToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		toolStripStatusLabel1->Text = "ƒÓÍÛÏÂÌÚ ‚≥‰ÍËÚÓ";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|rtf files (*.rtf)|*.rtf|All files(*.*) | *.*";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				System::Text::Encoding^ kod = System::Text::Encoding::GetEncoding(1251);
				auto read = gcnew IO::StreamReader(openFileDialog1->FileName, kod);
				richTextBox1->Text = read->ReadToEnd();
			} this->Text += (openFileDialog1->FileName);
}
private: System::Void saveToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "ƒÓÍÛÏÂÌÚ Á·ÂÂÊÂÌÓ";
}
private: System::Void printToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Õ‡‰ÛÍÛ‚‡ÚË";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Items[1]->Text = DateTime::Now.ToLongDateString();
}
private: System::Void ˇToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	   {
		   statusStrip1->Visible = false;
		   toolStrip1->Visible = false;
	   }
private: System::Void Ô‡ÌÂÎ≥ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ˇToolStripMenuItem_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = !(statusStrip1->Visible);
}

private: System::Void Ô‡ÌÂÎ≥ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ¯ËÙÚToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	richTextBox1->SelectionFont = fontDialog1->Font;
}
private: System::Void ÙÓÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->Color = richTextBox1->BackColor;
	if (colorDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		richTextBox1->BackColor = colorDialog1->Color;
}
private: System::Void ‰ÛÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	printDialog1->ShowDialog();
}
};
}
