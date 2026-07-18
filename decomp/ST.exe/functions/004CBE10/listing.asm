FUN_004cbe10:
004CBE10  56                        PUSH ESI
004CBE11  8B F1                     MOV ESI,ECX
004CBE13  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CBE19  83 C0 CE                  ADD EAX,-0x32
004CBE1C  83 F8 40                  CMP EAX,0x40
004CBE1F  77 4C                     JA 0x004cbe6d
004CBE21  33 C9                     XOR ECX,ECX
004CBE23  8A 88 AC BE 4C 00         MOV CL,byte ptr [EAX + 0x4cbeac]
switchD_004cbe29::switchD:
004CBE29  FF 24 8D 8C BE 4C 00      JMP dword ptr [ECX*0x4 + 0x4cbe8c]
switchD_004cbe29::caseD_45:
004CBE30  8B CE                     MOV ECX,ESI
004CBE32  E8 FB 9C F3 FF            CALL 0x00405b32
004CBE37  EB 34                     JMP 0x004cbe6d
switchD_004cbe29::caseD_4e:
004CBE39  8B CE                     MOV ECX,ESI
004CBE3B  E8 51 89 F3 FF            CALL 0x00404791
004CBE40  EB 2B                     JMP 0x004cbe6d
switchD_004cbe29::caseD_72:
004CBE42  8B CE                     MOV ECX,ESI
004CBE44  E8 9A 5A F3 FF            CALL 0x004018e3
004CBE49  EB 22                     JMP 0x004cbe6d
switchD_004cbe29::caseD_32:
004CBE4B  8B CE                     MOV ECX,ESI
004CBE4D  E8 C3 87 F3 FF            CALL 0x00404615
004CBE52  EB 19                     JMP 0x004cbe6d
switchD_004cbe29::caseD_52:
004CBE54  8B CE                     MOV ECX,ESI
004CBE56  E8 D1 9D F3 FF            CALL 0x00405c2c
004CBE5B  EB 10                     JMP 0x004cbe6d
switchD_004cbe29::caseD_70:
004CBE5D  8B CE                     MOV ECX,ESI
004CBE5F  E8 74 6A F3 FF            CALL 0x004028d8
004CBE64  EB 07                     JMP 0x004cbe6d
switchD_004cbe29::caseD_69:
004CBE66  8B CE                     MOV ECX,ESI
004CBE68  E8 22 95 F3 FF            CALL 0x0040538f
switchD_004cbe29::caseD_33:
004CBE6D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004CBE73  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBE79  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004CBE7F  50                        PUSH EAX
004CBE80  E8 25 75 F3 FF            CALL 0x004033aa
004CBE85  33 C0                     XOR EAX,EAX
004CBE87  5E                        POP ESI
004CBE88  C3                        RET
