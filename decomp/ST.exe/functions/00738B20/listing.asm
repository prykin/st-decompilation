__inc:
00738B20  55                        PUSH EBP
00738B21  8B EC                     MOV EBP,ESP
00738B23  51                        PUSH ECX
00738B24  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738B27  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00738B2A  83 E9 01                  SUB ECX,0x1
00738B2D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00738B30  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00738B33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738B36  83 78 04 00               CMP dword ptr [EAX + 0x4],0x0
00738B3A  7C 1F                     JL 0x00738b5b
00738B3C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738B3F  8B 11                     MOV EDX,dword ptr [ECX]
00738B41  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00738B44  25 FF 00 00 00            AND EAX,0xff
00738B49  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00738B4C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738B4F  8B 11                     MOV EDX,dword ptr [ECX]
00738B51  83 C2 01                  ADD EDX,0x1
00738B54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738B57  89 10                     MOV dword ptr [EAX],EDX
00738B59  EB 0F                     JMP 0x00738b6a
LAB_00738b5b:
00738B5B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738B5E  51                        PUSH ECX
00738B5F  E8 0C 42 00 00            CALL 0x0073cd70
00738B64  83 C4 04                  ADD ESP,0x4
00738B67  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00738b6a:
00738B6A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738B6D  8B E5                     MOV ESP,EBP
00738B6F  5D                        POP EBP
00738B70  C3                        RET
