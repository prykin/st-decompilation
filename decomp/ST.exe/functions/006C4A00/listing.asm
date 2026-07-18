FUN_006c4a00:
006C4A00  55                        PUSH EBP
006C4A01  8B EC                     MOV EBP,ESP
006C4A03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C4A06  85 C0                     TEST EAX,EAX
006C4A08  74 11                     JZ 0x006c4a1b
006C4A0A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C4A0D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C4A10  89 08                     MOV dword ptr [EAX],ECX
006C4A12  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C4A15  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006C4A18  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
LAB_006c4a1b:
006C4A1B  5D                        POP EBP
006C4A1C  C2 10 00                  RET 0x10
