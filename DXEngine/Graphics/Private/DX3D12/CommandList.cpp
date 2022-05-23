#include "CommandList.h"

using namespace Venus;

CommandList::CommandList(ID3D12CommandAllocator* allocator, ID3D12CommandList* list, D3D12_COMMAND_LIST_TYPE type)
	: type(type)
	, list(list)
	, allocator(allocator)
{
}

void CommandList::Reset()
{
	allocator->Reset();
}