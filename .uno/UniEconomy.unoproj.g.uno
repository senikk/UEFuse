sealed class UniEconomy_FuseControlsImage_Url_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Image _obj;
    public UniEconomy_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Url; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Url = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsText_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Text _obj;
    public UniEconomy_FuseControlsText_Value_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    Fuse.Reactive.Each _obj;
    public UniEconomy_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get() { return _obj.Items; }
    public override void Set(object v, global::Uno.UX.IPropertyListener origin) { _obj.Items = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseTriggersWhileTrue_Value_Property: Uno.UX.Property<bool>
{
    Fuse.Triggers.WhileTrue _obj;
    public UniEconomy_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsTextInput_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.TextInput _obj;
    public UniEconomy_FuseControlsTextInput_Value_Property(Fuse.Controls.TextInput obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsPageControl_Active_Property: Uno.UX.Property<Fuse.Visual>
{
    Fuse.Controls.PageControl _obj;
    public UniEconomy_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get() { return _obj.Active; }
    public override void Set(Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { _obj.Active = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsRectangle_Width_Property: Uno.UX.Property<Uno.UX.Size>
{
    Fuse.Controls.Rectangle _obj;
    public UniEconomy_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get() { return _obj.Width; }
    public override void Set(Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { _obj.Width = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsText_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Text _obj;
    public UniEconomy_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsCircle_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Circle _obj;
    public UniEconomy_FuseControlsCircle_Opacity_Property(Fuse.Controls.Circle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Circle _obj;
    public UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property(Fuse.Controls.Circle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.LengthAngleDegrees; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.LengthAngleDegrees = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsPanel_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Panel _obj;
    public UniEconomy_FuseControlsPanel_Opacity_Property(Fuse.Controls.Panel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsRectangle_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Rectangle _obj;
    public UniEconomy_FuseControlsRectangle_Opacity_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseScaling_Factor_Property: Uno.UX.Property<float>
{
    Fuse.Scaling _obj;
    public UniEconomy_FuseScaling_Factor_Property(Fuse.Scaling obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Factor; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.Factor = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_FuseControlsPanel_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Controls.Panel _obj;
    public UniEconomy_FuseControlsPanel_IsEnabled_Property(Fuse.Controls.Panel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.IsEnabled; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.IsEnabled = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
