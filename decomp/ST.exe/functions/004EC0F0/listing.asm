FUN_004ec0f0:
004EC0F0  56                        PUSH ESI
004EC0F1  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004EC0F7  8B F1                     MOV ESI,ECX
004EC0F9  57                        PUSH EDI
004EC0FA  6A 1D                     PUSH 0x1d
004EC0FC  33 FF                     XOR EDI,EDI
004EC0FE  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
004EC104  8B 0C 85 6C DE 7C 00      MOV ECX,dword ptr [EAX*0x4 + 0x7cde6c]
004EC10B  51                        PUSH ECX
004EC10C  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC112  52                        PUSH EDX
004EC113  6A 0E                     PUSH 0xe
004EC115  E8 69 80 F1 FF            CALL 0x00404183
004EC11A  85 C0                     TEST EAX,EAX
004EC11C  74 17                     JZ 0x004ec135
004EC11E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004EC124  68 26 01 00 00            PUSH 0x126
004EC129  68 48 16 7C 00            PUSH 0x7c1648
004EC12E  51                        PUSH ECX
004EC12F  50                        PUSH EAX
004EC130  E8 0B 9D 1B 00            CALL 0x006a5e40
LAB_004ec135:
004EC135  6A 0A                     PUSH 0xa
004EC137  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EC13D  E8 8A 91 F1 FF            CALL 0x004052cc
004EC142  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC148  50                        PUSH EAX
004EC149  E8 7E 91 F1 FF            CALL 0x004052cc
004EC14E  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EC154  50                        PUSH EAX
004EC155  E8 E6 E1 1F 00            CALL 0x006ea340
004EC15A  DB 86 04 05 00 00         FILD dword ptr [ESI + 0x504]
004EC160  51                        PUSH ECX
004EC161  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC167  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC16D  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004EC173  D9 1C 24                  FSTP float ptr [ESP]
004EC176  DB 86 00 05 00 00         FILD dword ptr [ESI + 0x500]
004EC17C  51                        PUSH ECX
004EC17D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC183  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC189  D9 1C 24                  FSTP float ptr [ESP]
004EC18C  DB 86 FC 04 00 00         FILD dword ptr [ESI + 0x4fc]
004EC192  51                        PUSH ECX
004EC193  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC199  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC19F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC1A5  D9 1C 24                  FSTP float ptr [ESP]
004EC1A8  E8 2C 84 F1 FF            CALL 0x004045d9
004EC1AD  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004EC1B3  E8 64 96 F1 FF            CALL 0x0040581c
004EC1B8  83 F8 03                  CMP EAX,0x3
004EC1BB  77 25                     JA 0x004ec1e2
switchD_004ec1bd::switchD:
004EC1BD  FF 24 85 30 C2 4E 00      JMP dword ptr [EAX*0x4 + 0x4ec230]
switchD_004ec1bd::caseD_0:
004EC1C4  8B 3D 90 AA 79 00         MOV EDI,dword ptr [0x0079aa90]
004EC1CA  EB 16                     JMP 0x004ec1e2
switchD_004ec1bd::caseD_1:
004EC1CC  8B 3D 94 AA 79 00         MOV EDI,dword ptr [0x0079aa94]
004EC1D2  EB 0E                     JMP 0x004ec1e2
switchD_004ec1bd::caseD_2:
004EC1D4  8B 3D 98 AA 79 00         MOV EDI,dword ptr [0x0079aa98]
004EC1DA  EB 06                     JMP 0x004ec1e2
switchD_004ec1bd::caseD_3:
004EC1DC  8B 3D 9C AA 79 00         MOV EDI,dword ptr [0x0079aa9c]
switchD_004ec1bd::default:
004EC1E2  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC1E8  6A 01                     PUSH 0x1
004EC1EA  E8 93 67 F1 FF            CALL 0x00402982
004EC1EF  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC1F5  6A 00                     PUSH 0x0
004EC1F7  57                        PUSH EDI
004EC1F8  57                        PUSH EDI
004EC1F9  6A 0E                     PUSH 0xe
004EC1FB  E8 BA 5C F1 FF            CALL 0x00401eba
004EC200  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC206  57                        PUSH EDI
004EC207  6A 0E                     PUSH 0xe
004EC209  E8 56 4E F1 FF            CALL 0x00401064
004EC20E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004EC214  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC21A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004EC220  50                        PUSH EAX
004EC221  6A 0E                     PUSH 0xe
004EC223  E8 18 90 F1 FF            CALL 0x00405240
004EC228  5F                        POP EDI
004EC229  33 C0                     XOR EAX,EAX
004EC22B  5E                        POP ESI
004EC22C  C3                        RET
