FUN_00422e20:
00422E20  55                        PUSH EBP
00422E21  8B EC                     MOV EBP,ESP
00422E23  56                        PUSH ESI
00422E24  8B F1                     MOV ESI,ECX
00422E26  57                        PUSH EDI
00422E27  8B 06                     MOV EAX,dword ptr [ESI]
00422E29  FF 50 04                  CALL dword ptr [EAX + 0x4]
00422E2C  8B F8                     MOV EDI,EAX
00422E2E  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00422E31  83 F8 14                  CMP EAX,0x14
00422E34  75 19                     JNZ 0x00422e4f
00422E36  8B CF                     MOV ECX,EDI
00422E38  E8 9F 00 FE FF            CALL 0x00402edc
00422E3D  83 F8 14                  CMP EAX,0x14
00422E40  75 0D                     JNZ 0x00422e4f
00422E42  83 BF C0 05 00 00 03      CMP dword ptr [EDI + 0x5c0],0x3
00422E49  0F 84 31 01 00 00         JZ 0x00422f80
LAB_00422e4f:
00422E4F  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00422E52  53                        PUSH EBX
00422E53  BB 01 00 00 00            MOV EBX,0x1
00422E58  84 C3                     TEST BL,AL
00422E5A  74 15                     JZ 0x00422e71
00422E5C  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00422E62  75 0D                     JNZ 0x00422e71
00422E64  8B CE                     MOV ECX,ESI
00422E66  E8 E1 17 FE FF            CALL 0x0040464c
00422E6B  09 9E D1 01 00 00         OR dword ptr [ESI + 0x1d1],EBX
LAB_00422e71:
00422E71  F6 45 08 02               TEST byte ptr [EBP + 0x8],0x2
00422E75  74 7D                     JZ 0x00422ef4
00422E77  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00422E7D  A8 02                     TEST AL,0x2
00422E7F  75 73                     JNZ 0x00422ef4
00422E81  0C 02                     OR AL,0x2
00422E83  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
00422E89  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00422E8C  83 F8 14                  CMP EAX,0x14
00422E8F  75 27                     JNZ 0x00422eb8
00422E91  33 FF                     XOR EDI,EDI
LAB_00422e93:
00422E93  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00422E97  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00422E9A  A0 4D 87 80 00            MOV AL,[0x0080874d]
00422E9F  51                        PUSH ECX
00422EA0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422EA6  52                        PUSH EDX
00422EA7  57                        PUSH EDI
00422EA8  6A 00                     PUSH 0x0
00422EAA  50                        PUSH EAX
00422EAB  E8 31 F6 FD FF            CALL 0x004024e1
00422EB0  47                        INC EDI
00422EB1  83 FF 05                  CMP EDI,0x5
00422EB4  7C DD                     JL 0x00422e93
00422EB6  EB 24                     JMP 0x00422edc
LAB_00422eb8:
00422EB8  33 FF                     XOR EDI,EDI
LAB_00422eba:
00422EBA  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00422EBE  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00422EC1  A0 4D 87 80 00            MOV AL,[0x0080874d]
00422EC6  51                        PUSH ECX
00422EC7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422ECD  52                        PUSH EDX
00422ECE  57                        PUSH EDI
00422ECF  53                        PUSH EBX
00422ED0  50                        PUSH EAX
00422ED1  E8 0B F6 FD FF            CALL 0x004024e1
00422ED6  47                        INC EDI
00422ED7  83 FF 05                  CMP EDI,0x5
00422EDA  7C DE                     JL 0x00422eba
LAB_00422edc:
00422EDC  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00422EE0  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00422EE3  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00422EE6  51                        PUSH ECX
00422EE7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422EED  52                        PUSH EDX
00422EEE  50                        PUSH EAX
00422EEF  E8 4F 07 FE FF            CALL 0x00403643
LAB_00422ef4:
00422EF4  F6 45 08 04               TEST byte ptr [EBP + 0x8],0x4
00422EF8  74 54                     JZ 0x00422f4e
00422EFA  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00422F00  A8 04                     TEST AL,0x4
00422F02  75 4A                     JNZ 0x00422f4e
00422F04  0C 04                     OR AL,0x4
00422F06  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
00422F0C  8B 86 1D 02 00 00         MOV EAX,dword ptr [ESI + 0x21d]
00422F12  3B C3                     CMP EAX,EBX
00422F14  75 38                     JNZ 0x00422f4e
00422F16  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00422F19  6A 00                     PUSH 0x0
00422F1B  83 F8 14                  CMP EAX,0x14
00422F1E  75 12                     JNZ 0x00422f32
00422F20  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422F26  53                        PUSH EBX
00422F27  E8 29 1D FE FF            CALL 0x00404c55
00422F2C  6A 00                     PUSH 0x0
00422F2E  6A 02                     PUSH 0x2
00422F30  EB 11                     JMP 0x00422f43
LAB_00422f32:
00422F32  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422F38  6A 04                     PUSH 0x4
00422F3A  E8 16 1D FE FF            CALL 0x00404c55
00422F3F  6A 00                     PUSH 0x0
00422F41  6A 05                     PUSH 0x5
LAB_00422f43:
00422F43  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00422F49  E8 07 1D FE FF            CALL 0x00404c55
LAB_00422f4e:
00422F4E  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
00422F51  5B                        POP EBX
00422F52  F6 C1 08                  TEST CL,0x8
00422F55  74 12                     JZ 0x00422f69
00422F57  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00422F5D  A8 08                     TEST AL,0x8
00422F5F  75 08                     JNZ 0x00422f69
00422F61  0C 08                     OR AL,0x8
00422F63  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_00422f69:
00422F69  F6 C1 10                  TEST CL,0x10
00422F6C  74 12                     JZ 0x00422f80
00422F6E  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00422F74  A8 10                     TEST AL,0x10
00422F76  75 08                     JNZ 0x00422f80
00422F78  0C 10                     OR AL,0x10
00422F7A  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_00422f80:
00422F80  5F                        POP EDI
00422F81  5E                        POP ESI
00422F82  5D                        POP EBP
00422F83  C2 04 00                  RET 0x4
