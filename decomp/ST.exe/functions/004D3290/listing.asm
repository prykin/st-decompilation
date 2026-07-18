FUN_004d3290:
004D3290  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004D3293  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004D3296  50                        PUSH EAX
004D3297  51                        PUSH ECX
004D3298  E8 EA FB F2 FF            CALL 0x00402e87
004D329D  83 C4 08                  ADD ESP,0x8
004D32A0  C3                        RET
