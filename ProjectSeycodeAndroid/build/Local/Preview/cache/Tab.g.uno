[Uno.Compiler.UxGenerated]
public partial class Tab: Fuse.Controls.Panel
{
    string _field_Icon;
    [global::Uno.UX.UXOriginSetter("SetIcon")]
    public string Icon
    {
        get { return _field_Icon; }
        set { SetIcon(value, null); }
    }
    public void SetIcon(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Icon)
        {
            _field_Icon = value;
            OnPropertyChanged("Icon", origin);
        }
    }
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> this_Icon_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    static Tab()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Tab()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new SeyCode_FuseControlsText_Value_Property(temp, __selector0);
        this_Icon_inst = new SeyCode_Tab_Icon_Property(this, __selector1);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new SeyCode_FuseControlsText_Value_Property(temp1, __selector0);
        this_Text_inst = new SeyCode_Tab_Text_Property(this, __selector2);
        var temp2 = new Fuse.Controls.PropertyBinding<string>(temp_Value_inst, this_Icon_inst);
        var temp3 = new Fuse.Controls.PropertyBinding<string>(temp1_Value_inst, this_Text_inst);
        var temp4 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        this.Name = __selector3;
        temp.FontSize = 35f;
        temp.TextColor = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Font = MainView.fa;
        temp.Bindings.Add(temp2);
        temp1.FontSize = 14f;
        temp1.TextColor = float4(1f, 1f, 1f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Y = new Uno.UX.Size(21f, Uno.UX.Unit.Unspecified);
        temp1.Font = MainView.Bold;
        temp1.Bindings.Add(temp3);
        this.Background = temp4;
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Icon";
    static global::Uno.UX.Selector __selector2 = "Text";
    static global::Uno.UX.Selector __selector3 = "self";
}
