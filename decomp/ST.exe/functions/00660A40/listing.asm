FUN_00660a40:
00660A40  55                        PUSH EBP
00660A41  8B EC                     MOV EBP,ESP
00660A43  51                        PUSH ECX
00660A44  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00660A47  53                        PUSH EBX
00660A48  56                        PUSH ESI
00660A49  57                        PUSH EDI
00660A4A  8B F9                     MOV EDI,ECX
00660A4C  33 DB                     XOR EBX,EBX
00660A4E  66 3B D3                  CMP DX,BX
00660A51  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00660A54  89 9F A7 00 00 00         MOV dword ptr [EDI + 0xa7],EBX
00660A5A  0F 8C A0 00 00 00         JL 0x00660b00
00660A60  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00660A67  66 3B D1                  CMP DX,CX
00660A6A  0F 8D 90 00 00 00         JGE 0x00660b00
00660A70  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00660A73  66 3B F3                  CMP SI,BX
00660A76  0F 8C 84 00 00 00         JL 0x00660b00
00660A7C  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00660A83  7D 7B                     JGE 0x00660b00
00660A85  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00660A88  66 3B C3                  CMP AX,BX
00660A8B  7C 73                     JL 0x00660b00
00660A8D  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00660A94  7D 6A                     JGE 0x00660b00
00660A96  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00660A9D  0F BF C0                  MOVSX EAX,AX
00660AA0  0F AF D8                  IMUL EBX,EAX
00660AA3  0F BF C9                  MOVSX ECX,CX
00660AA6  0F BF C6                  MOVSX EAX,SI
00660AA9  0F AF C8                  IMUL ECX,EAX
00660AAC  03 D9                     ADD EBX,ECX
00660AAE  0F BF CA                  MOVSX ECX,DX
00660AB1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00660AB7  03 D9                     ADD EBX,ECX
00660AB9  8B 04 DA                  MOV EAX,dword ptr [EDX + EBX*0x8]
00660ABC  85 C0                     TEST EAX,EAX
00660ABE  74 40                     JZ 0x00660b00
00660AC0  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00660AC3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00660AC6  66 8B 47 7D               MOV AX,word ptr [EDI + 0x7d]
00660ACA  66 3D FE FF               CMP AX,0xfffe
00660ACE  74 30                     JZ 0x00660b00
00660AD0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660AD6  85 C9                     TEST ECX,ECX
00660AD8  74 26                     JZ 0x00660b00
00660ADA  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00660ADD  50                        PUSH EAX
00660ADE  52                        PUSH EDX
00660ADF  E8 15 52 DA FF            CALL 0x00405cf9
00660AE4  85 C0                     TEST EAX,EAX
00660AE6  74 18                     JZ 0x00660b00
00660AE8  8B 10                     MOV EDX,dword ptr [EAX]
00660AEA  8D 4D FC                  LEA ECX,[EBP + -0x4]
00660AED  51                        PUSH ECX
00660AEE  6A 0B                     PUSH 0xb
00660AF0  8B C8                     MOV ECX,EAX
00660AF2  FF 52 08                  CALL dword ptr [EDX + 0x8]
00660AF5  5F                        POP EDI
00660AF6  5E                        POP ESI
00660AF7  33 C0                     XOR EAX,EAX
00660AF9  5B                        POP EBX
00660AFA  8B E5                     MOV ESP,EBP
00660AFC  5D                        POP EBP
00660AFD  C2 10 00                  RET 0x10
LAB_00660b00:
00660B00  5F                        POP EDI
00660B01  5E                        POP ESI
00660B02  83 C8 FF                  OR EAX,0xffffffff
00660B05  5B                        POP EBX
00660B06  8B E5                     MOV ESP,EBP
00660B08  5D                        POP EBP
00660B09  C2 10 00                  RET 0x10
