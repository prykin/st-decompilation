FUN_00626d70:
00626D70  55                        PUSH EBP
00626D71  8B EC                     MOV EBP,ESP
00626D73  56                        PUSH ESI
00626D74  8B F1                     MOV ESI,ECX
00626D76  57                        PUSH EDI
00626D77  8B 06                     MOV EAX,dword ptr [ESI]
00626D79  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00626D7C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00626D7F  89 07                     MOV dword ptr [EDI],EAX
00626D81  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00626D84  51                        PUSH ECX
00626D85  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00626D8B  E8 27 DC DD FF            CALL 0x004049b7
00626D90  88 47 04                  MOV byte ptr [EDI + 0x4],AL
00626D93  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
00626D99  80 F9 02                  CMP CL,0x2
00626D9C  B0 03                     MOV AL,0x3
00626D9E  75 30                     JNZ 0x00626dd0
00626DA0  8B 8E 62 02 00 00         MOV ECX,dword ptr [ESI + 0x262]
00626DA6  33 D2                     XOR EDX,EDX
00626DA8  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00626DAE  3B CA                     CMP ECX,EDX
00626DB0  75 06                     JNZ 0x00626db8
00626DB2  C6 47 05 01               MOV byte ptr [EDI + 0x5],0x1
00626DB6  EB 03                     JMP 0x00626dbb
LAB_00626db8:
00626DB8  88 47 05                  MOV byte ptr [EDI + 0x5],AL
LAB_00626dbb:
00626DBB  C6 47 09 4C               MOV byte ptr [EDI + 0x9],0x4c
00626DBF  8B 8E AE 02 00 00         MOV ECX,dword ptr [ESI + 0x2ae]
00626DC5  83 F9 04                  CMP ECX,0x4
00626DC8  0F 95 C1                  SETNZ CL
00626DCB  88 4F 0F                  MOV byte ptr [EDI + 0xf],CL
00626DCE  EB 04                     JMP 0x00626dd4
LAB_00626dd0:
00626DD0  C6 47 05 04               MOV byte ptr [EDI + 0x5],0x4
LAB_00626dd4:
00626DD4  38 86 AD 02 00 00         CMP byte ptr [ESI + 0x2ad],AL
00626DDA  75 31                     JNZ 0x00626e0d
00626DDC  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00626DE2  8B 86 5F 03 00 00         MOV EAX,dword ptr [ESI + 0x35f]
00626DE8  2B 82 E4 00 00 00         SUB EAX,dword ptr [EDX + 0xe4]
00626DEE  05 94 11 00 00            ADD EAX,0x1194
00626DF3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00626DF6  B8 6B 29 82 74            MOV EAX,0x7482296b
00626DFB  C1 E1 03                  SHL ECX,0x3
00626DFE  F7 E9                     IMUL ECX
00626E00  C1 FA 0B                  SAR EDX,0xb
00626E03  8B C2                     MOV EAX,EDX
00626E05  C1 E8 1F                  SHR EAX,0x1f
00626E08  03 D0                     ADD EDX,EAX
00626E0A  88 57 34                  MOV byte ptr [EDI + 0x34],DL
LAB_00626e0d:
00626E0D  8A 8E 1D 02 00 00         MOV CL,byte ptr [ESI + 0x21d]
00626E13  C6 47 06 01               MOV byte ptr [EDI + 0x6],0x1
00626E17  88 4F 08                  MOV byte ptr [EDI + 0x8],CL
00626E1A  8B 86 AE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ae]
00626E20  83 F8 04                  CMP EAX,0x4
00626E23  74 04                     JZ 0x00626e29
00626E25  C6 47 07 01               MOV byte ptr [EDI + 0x7],0x1
LAB_00626e29:
00626E29  5F                        POP EDI
00626E2A  5E                        POP ESI
00626E2B  5D                        POP EBP
00626E2C  C2 04 00                  RET 0x4
