[ComponentEditorProps(category: "GameScripted/Misc", description: "TEST")]
class TILW_RadioSwapComponentClass : ScriptComponentClass
{
}

class TILW_RadioSwapComponent : ScriptComponent
{
	// This is just a test, ignore it
	override void OnPostInit(IEntity owner)
	{
	}
	
	protected void TrySwapItem(IEntity owner)
	{
		Managed m = owner.FindComponent(InventoryItemComponent);
		if (!m) return;
		InventoryItemComponent iic = InventoryItemComponent.Cast(m);
		InventoryStorageSlot iss = iic.GetParentSlot();
		if (!iss) return;
		BaseInventoryStorageComponent isc = iss.GetStorage();
		if (!isc) return;
		
		int slotId = iss.GetID();
		
		// Find owner in inventory
		//
	}
}