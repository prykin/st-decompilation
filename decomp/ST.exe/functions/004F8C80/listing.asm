CPanelTy::PaintSMap:
004F8C80  55                        PUSH EBP
004F8C81  8B EC                     MOV EBP,ESP
004F8C83  83 EC 4C                  SUB ESP,0x4c
004F8C86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F8C8B  53                        PUSH EBX
004F8C8C  56                        PUSH ESI
004F8C8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F8C90  57                        PUSH EDI
004F8C91  8D 55 B8                  LEA EDX,[EBP + -0x48]
004F8C94  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F8C97  6A 00                     PUSH 0x0
004F8C99  52                        PUSH EDX
004F8C9A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004F8C9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F8CA3  E8 48 4B 23 00            CALL 0x0072d7f0
004F8CA8  8B F0                     MOV ESI,EAX
004F8CAA  83 C4 08                  ADD ESP,0x8
004F8CAD  85 F6                     TEST ESI,ESI
004F8CAF  0F 85 26 03 00 00         JNZ 0x004f8fdb
004F8CB5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004F8CB8  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
004F8CBB  8B B3 98 09 00 00         MOV ESI,dword ptr [EBX + 0x998]
004F8CC1  8B C1                     MOV EAX,ECX
004F8CC3  2B C6                     SUB EAX,ESI
004F8CC5  83 F8 64                  CMP EAX,0x64
004F8CC8  73 37                     JNC 0x004f8d01
004F8CCA  A1 98 75 80 00            MOV EAX,[0x00807598]
004F8CCF  8B 90 42 04 00 00         MOV EDX,dword ptr [EAX + 0x442]
004F8CD5  85 D2                     TEST EDX,EDX
004F8CD7  75 0E                     JNZ 0x004f8ce7
004F8CD9  8B 90 46 04 00 00         MOV EDX,dword ptr [EAX + 0x446]
004F8CDF  85 D2                     TEST EDX,EDX
004F8CE1  75 04                     JNZ 0x004f8ce7
004F8CE3  33 C0                     XOR EAX,EAX
004F8CE5  EB 05                     JMP 0x004f8cec
LAB_004f8ce7:
004F8CE7  B8 01 00 00 00            MOV EAX,0x1
LAB_004f8cec:
004F8CEC  85 C0                     TEST EAX,EAX
004F8CEE  0F 84 D7 02 00 00         JZ 0x004f8fcb
004F8CF4  83 3D 3C 67 80 00 01      CMP dword ptr [0x0080673c],0x1
004F8CFB  0F 8F CA 02 00 00         JG 0x004f8fcb
LAB_004f8d01:
004F8D01  89 8B 98 09 00 00         MOV dword ptr [EBX + 0x998],ECX
004F8D07  8B CB                     MOV ECX,EBX
004F8D09  E8 34 8C F0 FF            CALL 0x00401942
004F8D0E  8B 93 90 01 00 00         MOV EDX,dword ptr [EBX + 0x190]
004F8D14  33 C9                     XOR ECX,ECX
004F8D16  66 83 BB 3F 02 00 00 02   CMP word ptr [EBX + 0x23f],0x2
004F8D1E  0F 95 C1                  SETNZ CL
004F8D21  51                        PUSH ECX
004F8D22  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004F8D28  6A 07                     PUSH 0x7
004F8D2A  6A 05                     PUSH 0x5
004F8D2C  52                        PUSH EDX
004F8D2D  E8 7E E2 1E 00            CALL 0x006e6fb0
004F8D32  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004F8D38  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004F8D3D  F7 A1 E4 00 00 00         MUL dword ptr [ECX + 0xe4]
004F8D43  8B 0D CF C4 80 00         MOV ECX,dword ptr [0x0080c4cf]
004F8D49  8B F2                     MOV ESI,EDX
004F8D4B  C1 EE 03                  SHR ESI,0x3
004F8D4E  8B D6                     MOV EDX,ESI
004F8D50  2B D1                     SUB EDX,ECX
004F8D52  81 FA 2C 01 00 00         CMP EDX,0x12c
004F8D58  76 15                     JBE 0x004f8d6f
004F8D5A  B9 20 76 80 00            MOV ECX,0x807620
004F8D5F  E8 A6 87 F0 FF            CALL 0x0040150a
004F8D64  A3 94 87 80 00            MOV [0x00808794],EAX
004F8D69  89 35 CF C4 80 00         MOV dword ptr [0x0080c4cf],ESI
LAB_004f8d6f:
004F8D6F  3B B3 A0 09 00 00         CMP ESI,dword ptr [EBX + 0x9a0]
004F8D75  0F 84 23 02 00 00         JZ 0x004f8f9e
004F8D7B  89 B3 A0 09 00 00         MOV dword ptr [EBX + 0x9a0],ESI
004F8D81  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004F8D87  8B 8B 90 01 00 00         MOV ECX,dword ptr [EBX + 0x190]
004F8D8D  33 C0                     XOR EAX,EAX
004F8D8F  80 FA 03                  CMP DL,0x3
004F8D92  6A 0B                     PUSH 0xb
004F8D94  0F 94 C0                  SETZ AL
004F8D97  6A 28                     PUSH 0x28
004F8D99  83 C0 07                  ADD EAX,0x7
004F8D9C  6A 10                     PUSH 0x10
004F8D9E  50                        PUSH EAX
004F8D9F  6A 00                     PUSH 0x0
004F8DA1  51                        PUSH ECX
004F8DA2  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
004F8DA8  E8 E3 7C 21 00            CALL 0x00710a90
004F8DAD  33 C0                     XOR EAX,EAX
004F8DAF  A0 4D 87 80 00            MOV AL,[0x0080874d]
004F8DB4  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004F8DB7  8A 8C C0 F7 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087f7]
004F8DBE  84 C9                     TEST CL,CL
004F8DC0  0F 84 38 01 00 00         JZ 0x004f8efe
004F8DC6  8B 8B A0 09 00 00         MOV ECX,dword ptr [EBX + 0x9a0]
004F8DCC  8B B4 C0 FC 87 80 00      MOV ESI,dword ptr [EAX + EAX*0x8 + 0x8087fc]
004F8DD3  8B 84 C0 F8 87 80 00      MOV EAX,dword ptr [EAX + EAX*0x8 + 0x8087f8]
004F8DDA  2B CE                     SUB ECX,ESI
004F8DDC  3B C8                     CMP ECX,EAX
004F8DDE  72 2A                     JC 0x004f8e0a
004F8DE0  BF A4 21 7C 00            MOV EDI,0x7c21a4
004F8DE5  83 C9 FF                  OR ECX,0xffffffff
004F8DE8  33 C0                     XOR EAX,EAX
004F8DEA  8D 93 E1 01 00 00         LEA EDX,[EBX + 0x1e1]
004F8DF0  F2 AE                     SCASB.REPNE ES:EDI
004F8DF2  F7 D1                     NOT ECX
004F8DF4  2B F9                     SUB EDI,ECX
004F8DF6  8B C1                     MOV EAX,ECX
004F8DF8  8B F7                     MOV ESI,EDI
004F8DFA  8B FA                     MOV EDI,EDX
004F8DFC  C1 E9 02                  SHR ECX,0x2
004F8DFF  F3 A5                     MOVSD.REP ES:EDI,ESI
004F8E01  8B C8                     MOV ECX,EAX
004F8E03  83 E1 03                  AND ECX,0x3
004F8E06  F3 A4                     MOVSB.REP ES:EDI,ESI
004F8E08  EB 78                     JMP 0x004f8e82
LAB_004f8e0a:
004F8E0A  2B C1                     SUB EAX,ECX
004F8E0C  8B F0                     MOV ESI,EAX
004F8E0E  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
004F8E13  F7 E6                     MUL ESI
004F8E15  C1 EA 0B                  SHR EDX,0xb
004F8E18  84 D2                     TEST DL,DL
004F8E1A  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
004F8E1D  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
004F8E23  74 11                     JZ 0x004f8e36
004F8E25  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F8E28  81 E1 FF 00 00 00         AND ECX,0xff
004F8E2E  51                        PUSH ECX
004F8E2F  68 9C 21 7C 00            PUSH 0x7c219c
004F8E34  EB 0A                     JMP 0x004f8e40
LAB_004f8e36:
004F8E36  68 98 21 7C 00            PUSH 0x7c2198
004F8E3B  68 94 21 7C 00            PUSH 0x7c2194
LAB_004f8e40:
004F8E40  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
004F8E46  50                        PUSH EAX
004F8E47  FF D7                     CALL EDI
004F8E49  8B C6                     MOV EAX,ESI
004F8E4B  33 D2                     XOR EDX,EDX
004F8E4D  B9 10 0E 00 00            MOV ECX,0xe10
004F8E52  BE 3C 00 00 00            MOV ESI,0x3c
004F8E57  F7 F1                     DIV ECX
004F8E59  83 C4 0C                  ADD ESP,0xc
004F8E5C  8B CA                     MOV ECX,EDX
004F8E5E  33 D2                     XOR EDX,EDX
004F8E60  8B C1                     MOV EAX,ECX
004F8E62  F7 F6                     DIV ESI
004F8E64  B8 89 88 88 88            MOV EAX,0x88888889
004F8E69  52                        PUSH EDX
004F8E6A  F7 E1                     MUL ECX
004F8E6C  C1 EA 05                  SHR EDX,0x5
004F8E6F  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
004F8E75  52                        PUSH EDX
004F8E76  50                        PUSH EAX
004F8E77  68 84 21 7C 00            PUSH 0x7c2184
004F8E7C  50                        PUSH EAX
004F8E7D  FF D7                     CALL EDI
004F8E7F  83 C4 14                  ADD ESP,0x14
LAB_004f8e82:
004F8E82  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
004F8E88  33 D2                     XOR EDX,EDX
004F8E8A  80 F9 03                  CMP CL,0x3
004F8E8D  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
004F8E93  0F 94 C2                  SETZ DL
004F8E96  6A FF                     PUSH -0x1
004F8E98  83 C2 02                  ADD EDX,0x2
004F8E9B  6A FF                     PUSH -0x1
004F8E9D  52                        PUSH EDX
004F8E9E  6A 00                     PUSH 0x0
004F8EA0  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
004F8EA6  6A 00                     PUSH 0x0
004F8EA8  50                        PUSH EAX
004F8EA9  E8 C2 8C 21 00            CALL 0x00711b70
004F8EAE  83 3D D3 C4 80 00 02      CMP dword ptr [0x0080c4d3],0x2
004F8EB5  0F 84 E3 00 00 00         JZ 0x004f8f9e
004F8EBB  8B 8B CC 01 00 00         MOV ECX,dword ptr [EBX + 0x1cc]
004F8EC1  6A FF                     PUSH -0x1
004F8EC3  6A FF                     PUSH -0x1
004F8EC5  6A 00                     PUSH 0x0
004F8EC7  6A 0A                     PUSH 0xa
004F8EC9  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
004F8ECF  6A 0D                     PUSH 0xd
004F8ED1  50                        PUSH EAX
004F8ED2  E8 99 8C 21 00            CALL 0x00711b70
004F8ED7  8B 83 F0 00 00 00         MOV EAX,dword ptr [EBX + 0xf0]
004F8EDD  8B 8B EC 00 00 00         MOV ECX,dword ptr [EBX + 0xec]
004F8EE3  8B 93 74 01 00 00         MOV EDX,dword ptr [EBX + 0x174]
004F8EE9  50                        PUSH EAX
004F8EEA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F8EEF  51                        PUSH ECX
004F8EF0  6A FF                     PUSH -0x1
004F8EF2  52                        PUSH EDX
004F8EF3  50                        PUSH EAX
004F8EF4  E8 47 A7 1B 00            CALL 0x006b3640
004F8EF9  E9 A0 00 00 00            JMP 0x004f8f9e
LAB_004f8efe:
004F8EFE  8B BC C0 F8 87 80 00      MOV EDI,dword ptr [EAX + EAX*0x8 + 0x8087f8]
004F8F05  8B 93 A0 09 00 00         MOV EDX,dword ptr [EBX + 0x9a0]
004F8F0B  03 FA                     ADD EDI,EDX
004F8F0D  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
004F8F12  F7 E7                     MUL EDI
004F8F14  C1 EA 0B                  SHR EDX,0xb
004F8F17  84 D2                     TEST DL,DL
004F8F19  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
004F8F1C  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
004F8F22  74 11                     JZ 0x004f8f35
004F8F24  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F8F27  81 E1 FF 00 00 00         AND ECX,0xff
004F8F2D  51                        PUSH ECX
004F8F2E  68 9C 21 7C 00            PUSH 0x7c219c
004F8F33  EB 0A                     JMP 0x004f8f3f
LAB_004f8f35:
004F8F35  68 98 21 7C 00            PUSH 0x7c2198
004F8F3A  68 94 21 7C 00            PUSH 0x7c2194
LAB_004f8f3f:
004F8F3F  56                        PUSH ESI
004F8F40  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F8F46  8B C7                     MOV EAX,EDI
004F8F48  33 D2                     XOR EDX,EDX
004F8F4A  B9 10 0E 00 00            MOV ECX,0xe10
004F8F4F  BF 3C 00 00 00            MOV EDI,0x3c
004F8F54  F7 F1                     DIV ECX
004F8F56  83 C4 0C                  ADD ESP,0xc
004F8F59  8B CA                     MOV ECX,EDX
004F8F5B  33 D2                     XOR EDX,EDX
004F8F5D  8B C1                     MOV EAX,ECX
004F8F5F  F7 F7                     DIV EDI
004F8F61  B8 89 88 88 88            MOV EAX,0x88888889
004F8F66  52                        PUSH EDX
004F8F67  F7 E1                     MUL ECX
004F8F69  C1 EA 05                  SHR EDX,0x5
004F8F6C  52                        PUSH EDX
004F8F6D  56                        PUSH ESI
004F8F6E  68 84 21 7C 00            PUSH 0x7c2184
004F8F73  56                        PUSH ESI
004F8F74  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F8F7A  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F8F7F  83 C4 14                  ADD ESP,0x14
004F8F82  33 D2                     XOR EDX,EDX
004F8F84  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
004F8F8A  3C 03                     CMP AL,0x3
004F8F8C  6A FF                     PUSH -0x1
004F8F8E  0F 94 C2                  SETZ DL
004F8F91  6A FF                     PUSH -0x1
004F8F93  52                        PUSH EDX
004F8F94  6A 00                     PUSH 0x0
004F8F96  6A 00                     PUSH 0x0
004F8F98  56                        PUSH ESI
004F8F99  E8 D2 8B 21 00            CALL 0x00711b70
LAB_004f8f9e:
004F8F9E  66 83 BB 3F 02 00 00 02   CMP word ptr [EBX + 0x23f],0x2
004F8FA6  74 23                     JZ 0x004f8fcb
004F8FA8  8B 83 58 01 00 00         MOV EAX,dword ptr [EBX + 0x158]
004F8FAE  85 C0                     TEST EAX,EAX
004F8FB0  7C 19                     JL 0x004f8fcb
004F8FB2  8B 8B A4 00 00 00         MOV ECX,dword ptr [EBX + 0xa4]
004F8FB8  8B 53 4C                  MOV EDX,dword ptr [EBX + 0x4c]
004F8FBB  51                        PUSH ECX
004F8FBC  52                        PUSH EDX
004F8FBD  6A FF                     PUSH -0x1
004F8FBF  50                        PUSH EAX
004F8FC0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F8FC5  50                        PUSH EAX
004F8FC6  E8 75 A6 1B 00            CALL 0x006b3640
LAB_004f8fcb:
004F8FCB  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004F8FCE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F8FD4  5F                        POP EDI
004F8FD5  5E                        POP ESI
004F8FD6  5B                        POP EBX
004F8FD7  8B E5                     MOV ESP,EBP
004F8FD9  5D                        POP EBP
004F8FDA  C3                        RET
LAB_004f8fdb:
004F8FDB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004F8FDE  68 6C 21 7C 00            PUSH 0x7c216c
004F8FE3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F8FE8  56                        PUSH ESI
004F8FE9  6A 00                     PUSH 0x0
004F8FEB  68 FC 02 00 00            PUSH 0x2fc
004F8FF0  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F8FF5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F8FFB  E8 D0 44 1B 00            CALL 0x006ad4d0
004F9000  83 C4 18                  ADD ESP,0x18
004F9003  85 C0                     TEST EAX,EAX
004F9005  74 01                     JZ 0x004f9008
004F9007  CC                        INT3
LAB_004f9008:
004F9008  68 FC 02 00 00            PUSH 0x2fc
004F900D  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9012  6A 00                     PUSH 0x0
004F9014  56                        PUSH ESI
004F9015  E8 26 CE 1A 00            CALL 0x006a5e40
004F901A  5F                        POP EDI
004F901B  5E                        POP ESI
004F901C  5B                        POP EBX
004F901D  8B E5                     MOV ESP,EBP
004F901F  5D                        POP EBP
004F9020  C3                        RET
