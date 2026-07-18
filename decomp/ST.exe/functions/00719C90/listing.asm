FUN_00719c90:
00719C90  55                        PUSH EBP
00719C91  8B EC                     MOV EBP,ESP
00719C93  81 EC 00 01 00 00         SUB ESP,0x100
00719C99  56                        PUSH ESI
00719C9A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00719C9D  83 3E 00                  CMP dword ptr [ESI],0x0
00719CA0  74 09                     JZ 0x00719cab
00719CA2  56                        PUSH ESI
00719CA3  E8 B8 FF FF FF            CALL 0x00719c60
00719CA8  83 C4 04                  ADD ESP,0x4
LAB_00719cab:
00719CAB  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00719CB1  A1 C4 07 7F 00            MOV EAX,[0x007f07c4]
00719CB6  85 C0                     TEST EAX,EAX
00719CB8  5E                        POP ESI
00719CB9  74 33                     JZ 0x00719cee
00719CBB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00719CBE  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
00719CC4  68 00 01 00 00            PUSH 0x100
00719CC9  50                        PUSH EAX
00719CCA  51                        PUSH ECX
00719CCB  FF 15 BC BE 85 00         CALL dword ptr [0x0085bebc]
00719CD1  85 C0                     TEST EAX,EAX
00719CD3  74 19                     JZ 0x00719cee
00719CD5  68 30 20 00 00            PUSH 0x2030
00719CDA  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
00719CE0  68 F4 07 7F 00            PUSH 0x7f07f4
00719CE5  52                        PUSH EDX
00719CE6  6A 00                     PUSH 0x0
00719CE8  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
LAB_00719cee:
00719CEE  8B E5                     MOV ESP,EBP
00719CF0  5D                        POP EBP
00719CF1  C3                        RET
