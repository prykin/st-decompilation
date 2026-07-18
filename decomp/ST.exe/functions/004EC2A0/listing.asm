FUN_004ec2a0:
004EC2A0  56                        PUSH ESI
004EC2A1  8B F1                     MOV ESI,ECX
004EC2A3  57                        PUSH EDI
004EC2A4  33 FF                     XOR EDI,EDI
004EC2A6  8B 86 F1 01 00 00         MOV EAX,dword ptr [ESI + 0x1f1]
004EC2AC  F6 C4 40                  TEST AH,0x40
004EC2AF  0F 84 DB 00 00 00         JZ 0x004ec390
004EC2B5  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EC2BB  83 F8 03                  CMP EAX,0x3
004EC2BE  74 0E                     JZ 0x004ec2ce
004EC2C0  83 F8 04                  CMP EAX,0x4
004EC2C3  74 09                     JZ 0x004ec2ce
004EC2C5  83 F8 05                  CMP EAX,0x5
004EC2C8  0F 85 C2 00 00 00         JNZ 0x004ec390
LAB_004ec2ce:
004EC2CE  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004EC2D4  6A 09                     PUSH 0x9
004EC2D6  8B 88 54 01 00 00         MOV ECX,dword ptr [EAX + 0x154]
004EC2DC  8B 90 58 01 00 00         MOV EDX,dword ptr [EAX + 0x158]
004EC2E2  3B CA                     CMP ECX,EDX
004EC2E4  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EC2EA  7D 1E                     JGE 0x004ec30a
004EC2EC  E8 BE 7F F1 FF            CALL 0x004042af
004EC2F1  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004EC2F7  8B 8A 54 01 00 00         MOV ECX,dword ptr [EDX + 0x154]
004EC2FD  83 C1 02                  ADD ECX,0x2
004EC300  3B C1                     CMP EAX,ECX
004EC302  0F 8C 88 00 00 00         JL 0x004ec390
004EC308  EB 18                     JMP 0x004ec322
LAB_004ec30a:
004EC30A  E8 A0 7F F1 FF            CALL 0x004042af
004EC30F  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004EC315  8B 8A 54 01 00 00         MOV ECX,dword ptr [EDX + 0x154]
004EC31B  83 E9 02                  SUB ECX,0x2
004EC31E  3B C1                     CMP EAX,ECX
004EC320  7F 6E                     JG 0x004ec390
LAB_004ec322:
004EC322  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004EC328  E8 EF 94 F1 FF            CALL 0x0040581c
004EC32D  83 F8 03                  CMP EAX,0x3
004EC330  77 25                     JA 0x004ec357
switchD_004ec332::switchD:
004EC332  FF 24 85 98 C3 4E 00      JMP dword ptr [EAX*0x4 + 0x4ec398]
switchD_004ec332::caseD_0:
004EC339  8B 3D 90 AA 79 00         MOV EDI,dword ptr [0x0079aa90]
004EC33F  EB 16                     JMP 0x004ec357
switchD_004ec332::caseD_1:
004EC341  8B 3D 94 AA 79 00         MOV EDI,dword ptr [0x0079aa94]
004EC347  EB 0E                     JMP 0x004ec357
switchD_004ec332::caseD_2:
004EC349  8B 3D 98 AA 79 00         MOV EDI,dword ptr [0x0079aa98]
004EC34F  EB 06                     JMP 0x004ec357
switchD_004ec332::caseD_3:
004EC351  8B 3D 9C AA 79 00         MOV EDI,dword ptr [0x0079aa9c]
switchD_004ec332::default:
004EC357  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC35D  6A 00                     PUSH 0x0
004EC35F  57                        PUSH EDI
004EC360  57                        PUSH EDI
004EC361  6A 0E                     PUSH 0xe
004EC363  E8 52 5B F1 FF            CALL 0x00401eba
004EC368  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC36E  57                        PUSH EDI
004EC36F  6A 0E                     PUSH 0xe
004EC371  E8 EE 4C F1 FF            CALL 0x00401064
004EC376  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004EC37C  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC382  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004EC388  50                        PUSH EAX
004EC389  6A 0E                     PUSH 0xe
004EC38B  E8 B0 8E F1 FF            CALL 0x00405240
LAB_004ec390:
004EC390  5F                        POP EDI
004EC391  33 C0                     XOR EAX,EAX
004EC393  5E                        POP ESI
004EC394  C3                        RET
