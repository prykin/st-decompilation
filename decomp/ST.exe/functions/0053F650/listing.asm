FUN_0053f650:
0053F650  55                        PUSH EBP
0053F651  8B EC                     MOV EBP,ESP
0053F653  83 EC 48                  SUB ESP,0x48
0053F656  8A 81 94 01 00 00         MOV AL,byte ptr [ECX + 0x194]
0053F65C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053F65F  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0053F662  56                        PUSH ESI
0053F663  3A C1                     CMP AL,CL
0053F665  75 09                     JNZ 0x0053f670
0053F667  33 C0                     XOR EAX,EAX
0053F669  5E                        POP ESI
0053F66A  8B E5                     MOV ESP,EBP
0053F66C  5D                        POP EBP
0053F66D  C2 04 00                  RET 0x4
LAB_0053f670:
0053F670  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0053F676  8D 45 BC                  LEA EAX,[EBP + -0x44]
0053F679  8D 55 B8                  LEA EDX,[EBP + -0x48]
0053F67C  6A 00                     PUSH 0x0
0053F67E  50                        PUSH EAX
0053F67F  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0053F682  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053F688  E8 63 E1 1E 00            CALL 0x0072d7f0
0053F68D  8B F0                     MOV ESI,EAX
0053F68F  83 C4 08                  ADD ESP,0x8
0053F692  85 F6                     TEST ESI,ESI
0053F694  75 5B                     JNZ 0x0053f6f1
0053F696  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0053F699  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053F69C  84 C0                     TEST AL,AL
0053F69E  88 86 94 01 00 00         MOV byte ptr [ESI + 0x194],AL
0053F6A4  74 0B                     JZ 0x0053f6b1
0053F6A6  8B 16                     MOV EDX,dword ptr [ESI]
0053F6A8  8B CE                     MOV ECX,ESI
0053F6AA  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0053F6AD  6A 01                     PUSH 0x1
0053F6AF  EB 24                     JMP 0x0053f6d5
LAB_0053f6b1:
0053F6B1  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053F6B7  85 C9                     TEST ECX,ECX
0053F6B9  74 18                     JZ 0x0053f6d3
0053F6BB  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
0053F6C3  75 0E                     JNZ 0x0053f6d3
0053F6C5  8B 86 95 01 00 00         MOV EAX,dword ptr [ESI + 0x195]
0053F6CB  6A 01                     PUSH 0x1
0053F6CD  50                        PUSH EAX
0053F6CE  E8 E9 66 EC FF            CALL 0x00405dbc
LAB_0053f6d3:
0053F6D3  6A 00                     PUSH 0x0
LAB_0053f6d5:
0053F6D5  8B CE                     MOV ECX,ESI
0053F6D7  E8 6C 44 EC FF            CALL 0x00403b48
0053F6DC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053F6DF  B8 01 00 00 00            MOV EAX,0x1
0053F6E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F6EA  5E                        POP ESI
0053F6EB  8B E5                     MOV ESP,EBP
0053F6ED  5D                        POP EBP
0053F6EE  C2 04 00                  RET 0x4
LAB_0053f6f1:
0053F6F1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053F6F4  68 60 7A 7C 00            PUSH 0x7c7a60
0053F6F9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053F6FE  56                        PUSH ESI
0053F6FF  6A 00                     PUSH 0x0
0053F701  68 EB 01 00 00            PUSH 0x1eb
0053F706  68 70 78 7C 00            PUSH 0x7c7870
0053F70B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053F711  E8 BA DD 16 00            CALL 0x006ad4d0
0053F716  83 C4 18                  ADD ESP,0x18
0053F719  85 C0                     TEST EAX,EAX
0053F71B  74 01                     JZ 0x0053f71e
0053F71D  CC                        INT3
LAB_0053f71e:
0053F71E  68 EB 01 00 00            PUSH 0x1eb
0053F723  68 70 78 7C 00            PUSH 0x7c7870
0053F728  6A 00                     PUSH 0x0
0053F72A  56                        PUSH ESI
0053F72B  E8 10 67 16 00            CALL 0x006a5e40
0053F730  B8 01 00 00 00            MOV EAX,0x1
0053F735  5E                        POP ESI
0053F736  8B E5                     MOV ESP,EBP
0053F738  5D                        POP EBP
0053F739  C2 04 00                  RET 0x4
