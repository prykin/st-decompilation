FUN_00651bd0:
00651BD0  55                        PUSH EBP
00651BD1  8B EC                     MOV EBP,ESP
00651BD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651BD6  33 C9                     XOR ECX,ECX
00651BD8  B2 08                     MOV DL,0x8
LAB_00651bda:
00651BDA  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651BE1  75 51                     JNZ 0x00651c34
00651BE3  41                        INC ECX
00651BE4  83 F9 04                  CMP ECX,0x4
00651BE7  7C F1                     JL 0x00651bda
00651BE9  66 8B 08                  MOV CX,word ptr [EAX]
00651BEC  66 83 F9 05               CMP CX,0x5
00651BF0  7D 09                     JGE 0x00651bfb
00651BF2  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00651BF9  EB 08                     JMP 0x00651c03
LAB_00651bfb:
00651BFB  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00651C01  75 31                     JNZ 0x00651c34
LAB_00651c03:
00651C03  66 83 F9 06               CMP CX,0x6
00651C07  7D 09                     JGE 0x00651c12
00651C09  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
00651C10  EB 08                     JMP 0x00651c1a
LAB_00651c12:
00651C12  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00651C18  75 1A                     JNZ 0x00651c34
LAB_00651c1a:
00651C1A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651C1D  85 C9                     TEST ECX,ECX
00651C1F  7C 13                     JL 0x00651c34
00651C21  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00651C24  85 C0                     TEST EAX,EAX
00651C26  7C 0C                     JL 0x00651c34
00651C28  83 F8 02                  CMP EAX,0x2
00651C2B  7F 07                     JG 0x00651c34
00651C2D  B8 01 00 00 00            MOV EAX,0x1
00651C32  5D                        POP EBP
00651C33  C3                        RET
LAB_00651c34:
00651C34  33 C0                     XOR EAX,EAX
00651C36  5D                        POP EBP
00651C37  C3                        RET
