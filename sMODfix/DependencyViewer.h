#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for DependencyViewer
///
/// WARNING: If you change the name of this class, you will need to change the
///          'Resource File Name' property for the managed resource compiler tool
///          associated with all .resx files this class depends on.  Otherwise,
///          the designers will not be able to interact properly with localized
///          resources associated with this form.
/// </summary>
public ref class DependencyViewer : public System::Windows::Forms::Form
{
	public:
		DependencyViewer(TreeNode^ node)
		{
			InitializeComponent();
			treeView_files->Nodes->Add(node);
			treeView_files->ExpandAll();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DependencyViewer()
		{
			if (components)
			{
				delete components;
			}
		}

		private: System::Windows::Forms::TreeView^  treeView_files;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::TextBox^  textBox_files;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeView_files = (gcnew System::Windows::Forms::TreeView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_files = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			//
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->treeView_files);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox_files);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(792, 573);
			this->splitContainer1->SplitterDistance = 264;
			this->splitContainer1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tree View:";
			// 
			// treeView_files
			// 
			this->treeView_files->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->treeView_files->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
			this->treeView_files->Location = System::Drawing::Point(3, 16);
			this->treeView_files->Name = L"treeView_files";
			this->treeView_files->Size = System::Drawing::Size(786, 245);
			this->treeView_files->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Flat View:";
			// 
			// textBox_files
			// 
			this->textBox_files->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_files->Location = System::Drawing::Point(3, 16);
			this->textBox_files->Multiline = true;
			this->textBox_files->Name = L"textBox_files";
			this->textBox_files->Size = System::Drawing::Size(786, 286);
			this->textBox_files->TabIndex = 1;
			// 
			// DependencyViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(792, 573);
			this->Controls->Add(this->splitContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DependencyViewer";
			this->ShowIcon = false;
			this->Text = L"Dependencies (Incomplete Alpha Test)";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
};