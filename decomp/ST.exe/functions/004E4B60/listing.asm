FUN_004e4b60:
004E4B60  56                        PUSH ESI
004E4B61  8B F1                     MOV ESI,ECX
004E4B63  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E4B69  83 F8 06                  CMP EAX,0x6
004E4B6C  0F 87 52 01 00 00         JA 0x004e4cc4
switchD_004e4b72::switchD:
004E4B72  FF 24 85 C8 4C 4E 00      JMP dword ptr [EAX*0x4 + 0x4e4cc8]
switchD_004e4b72::caseD_0:
004E4B79  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E4B7F  83 F8 36                  CMP EAX,0x36
004E4B82  74 09                     JZ 0x004e4b8d
004E4B84  83 F8 5D                  CMP EAX,0x5d
004E4B87  0F 85 37 01 00 00         JNZ 0x004e4cc4
LAB_004e4b8d:
004E4B8D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4B90  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004E4B96  3B C1                     CMP EAX,ECX
004E4B98  74 47                     JZ 0x004e4be1
004E4B9A  57                        PUSH EDI
004E4B9B  51                        PUSH ECX
004E4B9C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4BA2  E8 10 FE F1 FF            CALL 0x004049b7
004E4BA7  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E4BAA  8A D0                     MOV DL,AL
004E4BAC  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E4BB2  81 E2 FF 00 00 00         AND EDX,0xff
004E4BB8  51                        PUSH ECX
004E4BB9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4BBF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E4BC2  03 C2                     ADD EAX,EDX
004E4BC4  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004E4BC7  E8 EB FD F1 FF            CALL 0x004049b7
004E4BCC  25 FF 00 00 00            AND EAX,0xff
004E4BD1  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004E4BD8  5F                        POP EDI
004E4BD9  84 C9                     TEST CL,CL
004E4BDB  0F 84 E3 00 00 00         JZ 0x004e4cc4
LAB_004e4be1:
004E4BE1  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E4BE7  85 C0                     TEST EAX,EAX
004E4BE9  0F 85 D5 00 00 00         JNZ 0x004e4cc4
004E4BEF  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004E4BF5  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E4BF8  8B 04 95 B0 8F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x798fb0]
004E4BFF  50                        PUSH EAX
004E4C00  51                        PUSH ECX
004E4C01  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4C07  E8 5F CC F1 FF            CALL 0x0040186b
004E4C0C  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004E4C12  8B CE                     MOV ECX,ESI
004E4C14  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004E4C17  8B 04 85 98 8F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x798f98]
004E4C1E  50                        PUSH EAX
004E4C1F  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004E4C25  E8 0B 0C F2 FF            CALL 0x00405835
004E4C2A  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004E4C34  33 C0                     XOR EAX,EAX
004E4C36  5E                        POP ESI
004E4C37  C3                        RET
switchD_004e4b72::caseD_1:
004E4C38  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E4C3E  83 F8 36                  CMP EAX,0x36
004E4C41  74 05                     JZ 0x004e4c48
004E4C43  83 F8 5D                  CMP EAX,0x5d
004E4C46  75 26                     JNZ 0x004e4c6e
LAB_004e4c48:
004E4C48  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E4C4E  85 C0                     TEST EAX,EAX
004E4C50  7E 1C                     JLE 0x004e4c6e
004E4C52  8B 8E DC 04 00 00         MOV ECX,dword ptr [ESI + 0x4dc]
004E4C58  85 C9                     TEST ECX,ECX
004E4C5A  74 12                     JZ 0x004e4c6e
004E4C5C  50                        PUSH EAX
004E4C5D  8B CE                     MOV ECX,ESI
004E4C5F  E8 12 CB F1 FF            CALL 0x00401776
004E4C64  C7 86 DC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4dc],0x0
LAB_004e4c6e:
004E4C6E  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E4C74  83 F8 3D                  CMP EAX,0x3d
004E4C77  74 05                     JZ 0x004e4c7e
004E4C79  83 F8 5D                  CMP EAX,0x5d
004E4C7C  75 46                     JNZ 0x004e4cc4
LAB_004e4c7e:
004E4C7E  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E4C84  85 C0                     TEST EAX,EAX
004E4C86  74 1F                     JZ 0x004e4ca7
004E4C88  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004E4C8E  8B 14 8D BC 8F 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x798fbc]
004E4C95  8B CE                     MOV ECX,ESI
004E4C97  52                        PUSH EDX
004E4C98  E8 9F D2 F1 FF            CALL 0x00401f3c
004E4C9D  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004e4ca7:
004E4CA7  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E4CAD  85 C0                     TEST EAX,EAX
004E4CAF  74 13                     JZ 0x004e4cc4
004E4CB1  6A 0A                     PUSH 0xa
004E4CB3  8B CE                     MOV ECX,ESI
004E4CB5  E8 B2 D4 F1 FF            CALL 0x0040216c
004E4CBA  C7 86 E4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e4],0x0
switchD_004e4b72::caseD_3:
004E4CC4  33 C0                     XOR EAX,EAX
004E4CC6  5E                        POP ESI
004E4CC7  C3                        RET
