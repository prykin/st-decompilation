FUN_00736af0:
00736AF0  55                        PUSH EBP
00736AF1  8B EC                     MOV EBP,ESP
00736AF3  51                        PUSH ECX
00736AF4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736AF7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00736AFA  83 3D 6C A3 85 00 00      CMP dword ptr [0x0085a36c],0x0
00736B01  75 19                     JNZ 0x00736b1c
00736B03  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00736B06  51                        PUSH ECX
00736B07  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00736B0A  52                        PUSH EDX
00736B0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736B0E  50                        PUSH EAX
00736B0F  E8 2C 78 FF FF            CALL 0x0072e340
00736B14  83 C4 0C                  ADD ESP,0xc
00736B17  E9 E1 00 00 00            JMP 0x00736bfd
LAB_00736b1c:
00736B1C  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00736B20  0F 84 B3 00 00 00         JZ 0x00736bd9
00736B26  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00736B29  83 E9 01                  SUB ECX,0x1
00736B2C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00736B2F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00736B32  33 C0                     XOR EAX,EAX
00736B34  8A 02                     MOV AL,byte ptr [EDX]
00736B36  33 C9                     XOR ECX,ECX
00736B38  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
00736B3E  83 E1 04                  AND ECX,0x4
00736B41  85 C9                     TEST ECX,ECX
00736B43  74 66                     JZ 0x00736bab
00736B45  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736B48  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00736B4B  8A 08                     MOV CL,byte ptr [EAX]
00736B4D  88 0A                     MOV byte ptr [EDX],CL
00736B4F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736B52  83 C2 01                  ADD EDX,0x1
00736B55  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00736B58  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00736B5B  83 C0 01                  ADD EAX,0x1
00736B5E  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00736B61  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00736B65  75 09                     JNZ 0x00736b70
00736B67  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00736B6A  C6 41 FF 00               MOV byte ptr [ECX + -0x1],0x0
00736B6E  EB 69                     JMP 0x00736bd9
LAB_00736b70:
00736B70  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00736B73  83 EA 01                  SUB EDX,0x1
00736B76  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00736B79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736B7C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00736B7F  8A 11                     MOV DL,byte ptr [ECX]
00736B81  88 10                     MOV byte ptr [EAX],DL
00736B83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736B86  33 C9                     XOR ECX,ECX
00736B88  8A 08                     MOV CL,byte ptr [EAX]
00736B8A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736B8D  83 C2 01                  ADD EDX,0x1
00736B90  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00736B93  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00736B96  83 C0 01                  ADD EAX,0x1
00736B99  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00736B9C  85 C9                     TEST ECX,ECX
00736B9E  75 09                     JNZ 0x00736ba9
00736BA0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00736BA3  C6 41 FE 00               MOV byte ptr [ECX + -0x2],0x0
00736BA7  EB 30                     JMP 0x00736bd9
LAB_00736ba9:
00736BA9  EB 29                     JMP 0x00736bd4
LAB_00736bab:
00736BAB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736BAE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00736BB1  8A 08                     MOV CL,byte ptr [EAX]
00736BB3  88 0A                     MOV byte ptr [EDX],CL
00736BB5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736BB8  33 C0                     XOR EAX,EAX
00736BBA  8A 02                     MOV AL,byte ptr [EDX]
00736BBC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00736BBF  83 C1 01                  ADD ECX,0x1
00736BC2  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00736BC5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00736BC8  83 C2 01                  ADD EDX,0x1
00736BCB  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00736BCE  85 C0                     TEST EAX,EAX
00736BD0  75 02                     JNZ 0x00736bd4
00736BD2  EB 05                     JMP 0x00736bd9
LAB_00736bd4:
00736BD4  E9 43 FF FF FF            JMP 0x00736b1c
LAB_00736bd9:
00736BD9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00736BDC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00736BDF  83 E9 01                  SUB ECX,0x1
00736BE2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00736BE5  85 C0                     TEST EAX,EAX
00736BE7  74 11                     JZ 0x00736bfa
00736BE9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736BEC  C6 02 00                  MOV byte ptr [EDX],0x0
00736BEF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736BF2  83 C0 01                  ADD EAX,0x1
00736BF5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00736BF8  EB DF                     JMP 0x00736bd9
LAB_00736bfa:
00736BFA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00736bfd:
00736BFD  8B E5                     MOV ESP,EBP
00736BFF  5D                        POP EBP
00736C00  C3                        RET
