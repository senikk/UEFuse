[Uno.Compiler.UxGenerated]
public partial class CompanyItem: Fuse.Controls.DockPanel
{
    global::Uno.UX.Property<string> temp_Url_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    static CompanyItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CompanyItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Image();
        temp_Url_inst = new UniEconomy_FuseControlsImage_Url_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp1, __selector1);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp2, __selector1);
        var temp3 = new Fuse.Reactive.DataBinding<string>(temp_Url_inst, "LogoUrl");
        var temp4 = new Fuse.Controls.Grid();
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "Name");
        var temp6 = new Fuse.Controls.StackPanel();
        var temp7 = new Fuse.Controls.Text();
        var temp8 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "Settings.OrganizationNumber");
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        temp_eb0 = new Fuse.Reactive.EventBinding("companySelected");
        this.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        this.Margin = float4(1f, 1f, 1f, 1f);
        this.Padding = float4(15f, 20f, 15f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(this, temp_eb0.OnEvent);
        temp.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Left);
        temp.Bindings.Add(temp3);
        temp4.RowCount = 2;
        temp4.Margin = float4(40f, 0f, 40f, 0f);
        temp4.Children.Add(temp1);
        temp4.Children.Add(temp6);
        temp1.Bindings.Add(temp5);
        temp6.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp2);
        temp7.Value = "Org.nr.";
        temp7.FontSize = 11f;
        temp7.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.FontSize = 11f;
        temp2.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.Bindings.Add(temp8);
        this.Background = temp9;
        this.Children.Add(temp);
        this.Children.Add(temp4);
        this.Bindings.Add(temp_eb0);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "Value";
}
