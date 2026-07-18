FUN_006e5670:
006E5670  55                        PUSH EBP
006E5671  8B EC                     MOV EBP,ESP
006E5673  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E5676  8B 01                     MOV EAX,dword ptr [ECX]
006E5678  52                        PUSH EDX
006E5679  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E567C  6A 00                     PUSH 0x0
006E567E  52                        PUSH EDX
006E567F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E5682  52                        PUSH EDX
006E5683  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E5686  52                        PUSH EDX
006E5687  FF 50 08                  CALL dword ptr [EAX + 0x8]
006E568A  5D                        POP EBP
006E568B  C2 10 00                  RET 0x10
