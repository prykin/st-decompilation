FUN_00635a40:
00635A40  55                        PUSH EBP
00635A41  8B EC                     MOV EBP,ESP
00635A43  83 EC 08                  SUB ESP,0x8
00635A46  8B 01                     MOV EAX,dword ptr [ECX]
00635A48  53                        PUSH EBX
00635A49  33 DB                     XOR EBX,EBX
00635A4B  57                        PUSH EDI
00635A4C  3B C3                     CMP EAX,EBX
00635A4E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00635A51  0F 84 25 01 00 00         JZ 0x00635b7c
00635A57  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00635A5A  33 FF                     XOR EDI,EDI
00635A5C  3B C3                     CMP EAX,EBX
00635A5E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00635A61  0F 8E 15 01 00 00         JLE 0x00635b7c
00635A67  56                        PUSH ESI
00635A68  EB 03                     JMP 0x00635a6d
LAB_00635a6a:
00635A6A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00635a6d:
00635A6D  8B 01                     MOV EAX,dword ptr [ECX]
00635A6F  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00635A72  0F 83 F7 00 00 00         JNC 0x00635b6f
00635A78  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00635A7B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00635A7E  0F AF F7                  IMUL ESI,EDI
00635A81  03 F1                     ADD ESI,ECX
00635A83  3B F3                     CMP ESI,EBX
00635A85  0F 84 E4 00 00 00         JZ 0x00635b6f
00635A8B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00635A8E  3B C3                     CMP EAX,EBX
00635A90  0F 8C D9 00 00 00         JL 0x00635b6f
00635A96  8B 4E 19                  MOV ECX,dword ptr [ESI + 0x19]
00635A99  51                        PUSH ECX
00635A9A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635AA0  53                        PUSH EBX
00635AA1  50                        PUSH EAX
00635AA2  E8 C9 47 0B 00            CALL 0x006ea270
00635AA7  DB 46 15                  FILD dword ptr [ESI + 0x15]
00635AAA  51                        PUSH ECX
00635AAB  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00635AAE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00635AB4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00635ABA  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00635AC0  D9 1C 24                  FSTP float ptr [ESP]
00635AC3  DB 46 11                  FILD dword ptr [ESI + 0x11]
00635AC6  51                        PUSH ECX
00635AC7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00635ACD  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00635AD3  D9 1C 24                  FSTP float ptr [ESP]
00635AD6  DB 46 0D                  FILD dword ptr [ESI + 0xd]
00635AD9  51                        PUSH ECX
00635ADA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635AE0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00635AE6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00635AEC  D9 1C 24                  FSTP float ptr [ESP]
00635AEF  52                        PUSH EDX
00635AF0  E8 6B 4E 0B 00            CALL 0x006ea960
00635AF5  8B 56 19                  MOV EDX,dword ptr [ESI + 0x19]
00635AF8  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00635AFB  42                        INC EDX
00635AFC  8B C2                     MOV EAX,EDX
00635AFE  89 56 19                  MOV dword ptr [ESI + 0x19],EDX
00635B01  3B C1                     CMP EAX,ECX
00635B03  7C 03                     JL 0x00635b08
00635B05  89 5E 19                  MOV dword ptr [ESI + 0x19],EBX
LAB_00635b08:
00635B08  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00635B0B  83 F8 01                  CMP EAX,0x1
00635B0E  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
00635B11  75 46                     JNZ 0x00635b59
00635B13  3A C3                     CMP AL,BL
00635B15  75 14                     JNZ 0x00635b2b
00635B17  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00635B1A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635B20  53                        PUSH EBX
00635B21  50                        PUSH EAX
00635B22  E8 79 4F 0B 00            CALL 0x006eaaa0
00635B27  C6 46 0C 01               MOV byte ptr [ESI + 0xc],0x1
LAB_00635b2b:
00635B2B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00635B2E  3B C3                     CMP EAX,EBX
00635B30  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
00635B33  74 1A                     JZ 0x00635b4f
00635B35  3A C3                     CMP AL,BL
00635B37  75 36                     JNZ 0x00635b6f
00635B39  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00635B3C  53                        PUSH EBX
00635B3D  51                        PUSH ECX
00635B3E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635B44  E8 57 4F 0B 00            CALL 0x006eaaa0
00635B49  C6 46 0C 01               MOV byte ptr [ESI + 0xc],0x1
00635B4D  EB 20                     JMP 0x00635b6f
LAB_00635b4f:
00635B4F  3A C3                     CMP AL,BL
00635B51  74 1C                     JZ 0x00635b6f
00635B53  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00635B56  52                        PUSH EDX
00635B57  EB 08                     JMP 0x00635b61
LAB_00635b59:
00635B59  3A C3                     CMP AL,BL
00635B5B  74 12                     JZ 0x00635b6f
00635B5D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00635B60  50                        PUSH EAX
LAB_00635b61:
00635B61  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635B67  E8 F4 4F 0B 00            CALL 0x006eab60
00635B6C  88 5E 0C                  MOV byte ptr [ESI + 0xc],BL
LAB_00635b6f:
00635B6F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00635B72  47                        INC EDI
00635B73  3B F8                     CMP EDI,EAX
00635B75  0F 8C EF FE FF FF         JL 0x00635a6a
00635B7B  5E                        POP ESI
LAB_00635b7c:
00635B7C  5F                        POP EDI
00635B7D  5B                        POP EBX
00635B7E  8B E5                     MOV ESP,EBP
00635B80  5D                        POP EBP
00635B81  C2 04 00                  RET 0x4
