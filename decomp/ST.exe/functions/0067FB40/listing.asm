FUN_0067fb40:
0067FB40  8B 0D 38 8A 84 00         MOV ECX,dword ptr [0x00848a38]
0067FB46  85 C9                     TEST ECX,ECX
0067FB48  74 4A                     JZ 0x0067fb94
0067FB4A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067FB4D  56                        PUSH ESI
0067FB4E  33 F6                     XOR ESI,ESI
0067FB50  85 C0                     TEST EAX,EAX
0067FB52  7E 2F                     JLE 0x0067fb83
0067FB54  3B F0                     CMP ESI,EAX
LAB_0067fb56:
0067FB56  73 23                     JNC 0x0067fb7b
0067FB58  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067FB5B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067FB5E  0F AF C6                  IMUL EAX,ESI
0067FB61  03 C2                     ADD EAX,EDX
0067FB63  85 C0                     TEST EAX,EAX
0067FB65  74 14                     JZ 0x0067fb7b
0067FB67  83 38 00                  CMP dword ptr [EAX],0x0
0067FB6A  74 0F                     JZ 0x0067fb7b
0067FB6C  50                        PUSH EAX
0067FB6D  E8 CB 1D D8 FF            CALL 0x0040193d
0067FB72  8B 0D 38 8A 84 00         MOV ECX,dword ptr [0x00848a38]
0067FB78  83 C4 04                  ADD ESP,0x4
LAB_0067fb7b:
0067FB7B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067FB7E  46                        INC ESI
0067FB7F  3B F0                     CMP ESI,EAX
0067FB81  7C D3                     JL 0x0067fb56
LAB_0067fb83:
0067FB83  51                        PUSH ECX
0067FB84  E8 87 E5 02 00            CALL 0x006ae110
0067FB89  C7 05 38 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a38],0x0
0067FB93  5E                        POP ESI
LAB_0067fb94:
0067FB94  A1 3C 8A 84 00            MOV EAX,[0x00848a3c]
0067FB99  85 C0                     TEST EAX,EAX
0067FB9B  74 06                     JZ 0x0067fba3
0067FB9D  50                        PUSH EAX
0067FB9E  E8 CD 59 03 00            CALL 0x006b5570
LAB_0067fba3:
0067FBA3  C7 05 3C 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a3c],0x0
0067FBAD  C3                        RET
