FUN_00620ce0:
00620CE0  55                        PUSH EBP
00620CE1  8B EC                     MOV EBP,ESP
00620CE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00620CE6  53                        PUSH EBX
00620CE7  56                        PUSH ESI
00620CE8  57                        PUSH EDI
00620CE9  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00620CEF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620CF2  33 C0                     XOR EAX,EAX
00620CF4  33 DB                     XOR EBX,EBX
00620CF6  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00620CFC  8B B1 E9 00 00 00         MOV ESI,dword ptr [ECX + 0xe9]
00620D02  83 CF FF                  OR EDI,0xffffffff
00620D05  85 F6                     TEST ESI,ESI
00620D07  74 60                     JZ 0x00620d69
00620D09  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00620D0C  85 C9                     TEST ECX,ECX
00620D0E  7C 59                     JL 0x00620d69
00620D10  33 D2                     XOR EDX,EDX
00620D12  85 C9                     TEST ECX,ECX
00620D14  7E 53                     JLE 0x00620d69
00620D16  3B D1                     CMP EDX,ECX
LAB_00620d18:
00620D18  73 0B                     JNC 0x00620d25
00620D1A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00620D1D  0F AF CA                  IMUL ECX,EDX
00620D20  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00620D23  EB 02                     JMP 0x00620d27
LAB_00620d25:
00620D25  33 C9                     XOR ECX,ECX
LAB_00620d27:
00620D27  8B 09                     MOV ECX,dword ptr [ECX]
00620D29  85 C9                     TEST ECX,ECX
00620D2B  76 0D                     JBE 0x00620d3a
00620D2D  3B CB                     CMP ECX,EBX
00620D2F  76 09                     JBE 0x00620d3a
00620D31  8B FA                     MOV EDI,EDX
00620D33  8B D9                     MOV EBX,ECX
00620D35  B8 01 00 00 00            MOV EAX,0x1
LAB_00620d3a:
00620D3A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00620D3D  42                        INC EDX
00620D3E  3B D1                     CMP EDX,ECX
00620D40  7C D6                     JL 0x00620d18
00620D42  85 FF                     TEST EDI,EDI
00620D44  7C 23                     JL 0x00620d69
00620D46  3B F9                     CMP EDI,ECX
00620D48  73 0D                     JNC 0x00620d57
00620D4A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00620D4D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00620D50  0F AF CF                  IMUL ECX,EDI
00620D53  03 CA                     ADD ECX,EDX
00620D55  EB 02                     JMP 0x00620d59
LAB_00620d57:
00620D57  33 C9                     XOR ECX,ECX
LAB_00620d59:
00620D59  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00620D5C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00620D5F  89 16                     MOV dword ptr [ESI],EDX
00620D61  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620D64  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00620D67  89 0A                     MOV dword ptr [EDX],ECX
LAB_00620d69:
00620D69  5F                        POP EDI
00620D6A  5E                        POP ESI
00620D6B  5B                        POP EBX
00620D6C  5D                        POP EBP
00620D6D  C2 08 00                  RET 0x8
