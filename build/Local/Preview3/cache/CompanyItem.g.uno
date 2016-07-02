[Uno.Compiler.UxGenerated]
public partial class CompanyItem: Fuse.Controls.DockPanel
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
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
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new UniEconomy_FuseControlsText_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.Image();
        var temp3 = new Fuse.Controls.Grid();
        var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "Name");
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "Key");
        var temp6 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        this.Margin = float4(1f, 1f, 1f, 1f);
        this.Padding = float4(15f, 20f, 15f, 20f);
        temp2.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp2.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Left);
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/avatar1.png"));
        temp3.RowCount = 2;
        temp3.Margin = float4(40f, 0f, 40f, 0f);
        temp3.Children.Add(temp);
        temp3.Children.Add(temp1);
        temp.Bindings.Add(temp4);
        temp1.TextColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.Bindings.Add(temp5);
        this.Background = temp6;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
