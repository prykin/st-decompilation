FUN_00626c90:
00626C90  55                        PUSH EBP
00626C91  8B EC                     MOV EBP,ESP
00626C93  56                        PUSH ESI
00626C94  57                        PUSH EDI
00626C95  8B F9                     MOV EDI,ECX
00626C97  80 BF AD 02 00 00 02      CMP byte ptr [EDI + 0x2ad],0x2
00626C9E  75 20                     JNZ 0x00626cc0
00626CA0  8B 8F 62 02 00 00         MOV ECX,dword ptr [EDI + 0x262]
00626CA6  33 C0                     XOR EAX,EAX
00626CA8  A0 4D 87 80 00            MOV AL,[0x0080874d]
00626CAD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00626CB0  3B C8                     CMP ECX,EAX
00626CB2  0F 95 C1                  SETNZ CL
00626CB5  49                        DEC ECX
00626CB6  83 E1 FE                  AND ECX,0xfffffffe
00626CB9  83 C1 03                  ADD ECX,0x3
00626CBC  88 0E                     MOV byte ptr [ESI],CL
00626CBE  EB 06                     JMP 0x00626cc6
LAB_00626cc0:
00626CC0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00626CC3  C6 06 04                  MOV byte ptr [ESI],0x4
LAB_00626cc6:
00626CC6  8A 97 1D 02 00 00         MOV DL,byte ptr [EDI + 0x21d]
00626CCC  C6 46 02 01               MOV byte ptr [ESI + 0x2],0x1
00626CD0  88 56 01                  MOV byte ptr [ESI + 0x1],DL
00626CD3  8B 07                     MOV EAX,dword ptr [EDI]
00626CD5  8B CF                     MOV ECX,EDI
00626CD7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00626CDA  89 46 03                  MOV dword ptr [ESI + 0x3],EAX
00626CDD  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00626CE0  51                        PUSH ECX
00626CE1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00626CE7  E8 CB DC DD FF            CALL 0x004049b7
00626CEC  88 46 07                  MOV byte ptr [ESI + 0x7],AL
00626CEF  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00626CF2  8D 87 8E 02 00 00         LEA EAX,[EDI + 0x28e]
00626CF8  6A 0E                     PUSH 0xe
00626CFA  8D 4E 0C                  LEA ECX,[ESI + 0xc]
00626CFD  50                        PUSH EAX
00626CFE  51                        PUSH ECX
00626CFF  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
00626D02  E8 39 76 10 00            CALL 0x0072e340
00626D07  33 D2                     XOR EDX,EDX
00626D09  C6 46 1B 64               MOV byte ptr [ESI + 0x1b],0x64
00626D0D  89 56 2A                  MOV dword ptr [ESI + 0x2a],EDX
00626D10  8B CE                     MOV ECX,ESI
00626D12  88 56 2E                  MOV byte ptr [ESI + 0x2e],DL
00626D15  83 C4 0C                  ADD ESP,0xc
00626D18  0F BF 47 4B               MOVSX EAX,word ptr [EDI + 0x4b]
00626D1C  2B C8                     SUB ECX,EAX
00626D1E  C6 41 2E 01               MOV byte ptr [ECX + 0x2e],0x1
00626D22  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
00626D28  83 F8 04                  CMP EAX,0x4
00626D2B  74 04                     JZ 0x00626d31
00626D2D  C6 46 1D 01               MOV byte ptr [ESI + 0x1d],0x1
LAB_00626d31:
00626D31  5F                        POP EDI
00626D32  5E                        POP ESI
00626D33  5D                        POP EBP
00626D34  C2 04 00                  RET 0x4
