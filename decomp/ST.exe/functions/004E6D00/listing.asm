FUN_004e6d00:
004E6D00  55                        PUSH EBP
004E6D01  8B EC                     MOV EBP,ESP
004E6D03  51                        PUSH ECX
004E6D04  53                        PUSH EBX
004E6D05  56                        PUSH ESI
004E6D06  8B D9                     MOV EBX,ECX
004E6D08  57                        PUSH EDI
004E6D09  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004E6D0C  B9 07 00 00 00            MOV ECX,0x7
004E6D11  33 C0                     XOR EAX,EAX
004E6D13  F3 AB                     STOSD.REP ES:EDI
004E6D15  66 AB                     STOSW ES:EDI
004E6D17  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E6D1A  8B CB                     MOV ECX,EBX
004E6D1C  57                        PUSH EDI
004E6D1D  E8 95 DC F1 FF            CALL 0x004049b7
004E6D22  25 FF 00 00 00            AND EAX,0xff
004E6D27  8B CB                     MOV ECX,EBX
004E6D29  48                        DEC EAX
004E6D2A  8B F0                     MOV ESI,EAX
004E6D2C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E6D2F  50                        PUSH EAX
004E6D30  57                        PUSH EDI
004E6D31  E8 66 D9 F1 FF            CALL 0x0040469c
004E6D36  85 C0                     TEST EAX,EAX
004E6D38  0F 85 81 00 00 00         JNZ 0x004e6dbf
004E6D3E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E6D41  8B CE                     MOV ECX,ESI
004E6D43  C1 E1 05                  SHL ECX,0x5
004E6D46  03 CE                     ADD ECX,ESI
004E6D48  BF 01 00 00 00            MOV EDI,0x1
004E6D4D  8D 44 4A CE               LEA EAX,[EDX + ECX*0x2 + -0x32]
004E6D51  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E6D54  8A 8C 40 4D 0E 7C 00      MOV CL,byte ptr [EAX + EAX*0x2 + 0x7c0e4d]
004E6D5B  84 C9                     TEST CL,CL
004E6D5D  74 60                     JZ 0x004e6dbf
004E6D5F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004E6D62  EB 03                     JMP 0x004e6d67
LAB_004e6d64:
004E6D64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004e6d67:
004E6D67  83 FF 03                  CMP EDI,0x3
004E6D6A  7D 53                     JGE 0x004e6dbf
004E6D6C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E6D6F  8D 84 40 4C 0E 7C 00      LEA EAX,[EAX + EAX*0x2 + 0x7c0e4c]
004E6D76  33 C9                     XOR ECX,ECX
004E6D78  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E6D7B  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
004E6D7E  51                        PUSH ECX
004E6D7F  52                        PUSH EDX
004E6D80  8B CB                     MOV ECX,EBX
004E6D82  E8 E4 AA F1 FF            CALL 0x0040186b
004E6D87  85 C0                     TEST EAX,EAX
004E6D89  75 2A                     JNZ 0x004e6db5
004E6D8B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E6D8E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E6D91  52                        PUSH EDX
004E6D92  8A 04 39                  MOV AL,byte ptr [ECX + EDI*0x1]
004E6D95  8B CB                     MOV ECX,EBX
004E6D97  89 06                     MOV dword ptr [ESI],EAX
004E6D99  E8 19 DC F1 FF            CALL 0x004049b7
004E6D9E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E6DA1  88 46 04                  MOV byte ptr [ESI + 0x4],AL
004E6DA4  8B 06                     MOV EAX,dword ptr [ESI]
004E6DA6  50                        PUSH EAX
004E6DA7  51                        PUSH ECX
004E6DA8  8B CB                     MOV ECX,EBX
004E6DAA  E8 E7 C5 F1 FF            CALL 0x00403396
004E6DAF  88 46 05                  MOV byte ptr [ESI + 0x5],AL
004E6DB2  83 C6 06                  ADD ESI,0x6
LAB_004e6db5:
004E6DB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E6DB8  47                        INC EDI
004E6DB9  80 3C 3A 00               CMP byte ptr [EDX + EDI*0x1],0x0
004E6DBD  75 A5                     JNZ 0x004e6d64
LAB_004e6dbf:
004E6DBF  5F                        POP EDI
004E6DC0  5E                        POP ESI
004E6DC1  5B                        POP EBX
004E6DC2  8B E5                     MOV ESP,EBP
004E6DC4  5D                        POP EBP
004E6DC5  C2 0C 00                  RET 0xc
