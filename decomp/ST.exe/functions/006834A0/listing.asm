FUN_006834a0:
006834A0  E8 5B E0 D7 FF            CALL 0x00401500
006834A5  83 3D 18 2D 7D 00 03      CMP dword ptr [0x007d2d18],0x3
006834AC  75 2E                     JNZ 0x006834dc
LAB_006834ae:
006834AE  6A 03                     PUSH 0x3
006834B0  E8 08 1E D8 FF            CALL 0x004052bd
006834B5  6A 01                     PUSH 0x1
006834B7  68 20 03 00 00            PUSH 0x320
006834BC  E8 CE FB D7 FF            CALL 0x0040308f
006834C1  E8 3A E0 D7 FF            CALL 0x00401500
006834C6  6A 02                     PUSH 0x2
006834C8  6A 03                     PUSH 0x3
006834CA  E8 9E 27 D8 FF            CALL 0x00405c6d
006834CF  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006834D4  83 C4 14                  ADD ESP,0x14
006834D7  83 F8 03                  CMP EAX,0x3
006834DA  74 D2                     JZ 0x006834ae
LAB_006834dc:
006834DC  C3                        RET
