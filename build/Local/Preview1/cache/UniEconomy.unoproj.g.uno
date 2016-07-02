sealed class UniEconomy_FuseControlsPanel_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Panel _obj;
    public UniEconomy_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
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
sealed class UniEconomy_FuseControlsText_TextColor_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Text _obj;
    public UniEconomy_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.TextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.TextColor = v; }
    public override bool SupportsOriginSetter { get { return false; } }
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
sealed class UniEconomy_FuseControlsRectangle_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Rectangle _obj;
    public UniEconomy_FuseControlsRectangle_Color_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsRectangle_Height_Property: Uno.UX.Property<Uno.UX.Size>
{
    Fuse.Controls.Rectangle _obj;
    public UniEconomy_FuseControlsRectangle_Height_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get() { return _obj.Height; }
    public override void Set(Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { _obj.Height = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_PageWithTitle_HeaderColor_Property: Uno.UX.Property<float4>
{
    PageWithTitle _obj;
    public UniEconomy_PageWithTitle_HeaderColor_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.HeaderColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetHeaderColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_PageWithTitle_Title_Property: Uno.UX.Property<string>
{
    PageWithTitle _obj;
    public UniEconomy_PageWithTitle_Title_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Title; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Title = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class UniEconomy_PageWithTitle_HeaderTextColor_Property: Uno.UX.Property<float4>
{
    PageWithTitle _obj;
    public UniEconomy_PageWithTitle_HeaderTextColor_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.HeaderTextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetHeaderTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_PageWithTitle_Instructions_Property: Uno.UX.Property<string>
{
    PageWithTitle _obj;
    public UniEconomy_PageWithTitle_Instructions_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Instructions; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetInstructions(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class UniEconomy_FuseControlsRectangle_CornerRadius_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Rectangle _obj;
    public UniEconomy_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.CornerRadius; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.CornerRadius = v; }
    public override bool SupportsOriginSetter { get { return false; } }
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
sealed class UniEconomy_FuseEffectsBlur_Radius_Property: Uno.UX.Property<float>
{
    Fuse.Effects.Blur _obj;
    public UniEconomy_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Radius; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.Radius = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
