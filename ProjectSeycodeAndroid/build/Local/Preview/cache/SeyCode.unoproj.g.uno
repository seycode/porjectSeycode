sealed class SeyCode_FuseControlsText_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Text _obj;
    public SeyCode_FuseControlsText_Value_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_TInput_Value_Property: Uno.UX.Property<string>
{
    TInput _obj;
    public SeyCode_TInput_Value_Property(TInput obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_Checkbox_Value_Property: Uno.UX.Property<bool>
{
    Checkbox _obj;
    public SeyCode_Checkbox_Value_Property(Checkbox obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_TView_Value_Property: Uno.UX.Property<string>
{
    TView _obj;
    public SeyCode_TView_Value_Property(TView obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_Tab_Icon_Property: Uno.UX.Property<string>
{
    Tab _obj;
    public SeyCode_Tab_Icon_Property(Tab obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Icon; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetIcon(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_Tab_Text_Property: Uno.UX.Property<string>
{
    Tab _obj;
    public SeyCode_Tab_Text_Property(Tab obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Text; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_Btn_Text_Property: Uno.UX.Property<string>
{
    Btn _obj;
    public SeyCode_Btn_Text_Property(Btn obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Text; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    Fuse.Controls.MultiLayoutPanel _obj;
    public SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property(Fuse.Controls.MultiLayoutPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get() { return _obj.LayoutElement; }
    public override void Set(Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { _obj.LayoutElement = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class SeyCode_FuseControlsPageControl_Active_Property: Uno.UX.Property<Fuse.Visual>
{
    Fuse.Controls.PageControl _obj;
    public SeyCode_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get() { return _obj.Active; }
    public override void Set(Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { _obj.Active = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
