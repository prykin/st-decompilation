FUN_004ec400:
004EC400  55                        PUSH EBP
004EC401  8B EC                     MOV EBP,ESP
004EC403  51                        PUSH ECX
004EC404  53                        PUSH EBX
004EC405  56                        PUSH ESI
004EC406  8B F1                     MOV ESI,ECX
004EC408  57                        PUSH EDI
004EC409  83 BE D0 04 00 00 04      CMP dword ptr [ESI + 0x4d0],0x4
004EC410  0F 85 8D 00 00 00         JNZ 0x004ec4a3
004EC416  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EC41B  8B 8E 14 05 00 00         MOV ECX,dword ptr [ESI + 0x514]
004EC421  41                        INC ECX
004EC422  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004EC428  3B C1                     CMP EAX,ECX
004EC42A  72 77                     JC 0x004ec4a3
004EC42C  8B BE 04 05 00 00         MOV EDI,dword ptr [ESI + 0x504]
004EC432  51                        PUSH ECX
004EC433  83 C7 03                  ADD EDI,0x3
004EC436  8B 9E 10 05 00 00         MOV EBX,dword ptr [ESI + 0x510]
004EC43C  8B D7                     MOV EDX,EDI
004EC43E  43                        INC EBX
004EC43F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EC442  89 86 14 05 00 00         MOV dword ptr [ESI + 0x514],EAX
004EC448  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004EC44B  89 9E 10 05 00 00         MOV dword ptr [ESI + 0x510],EBX
004EC451  89 BE 04 05 00 00         MOV dword ptr [ESI + 0x504],EDI
004EC457  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC45D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC463  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004EC469  D9 1C 24                  FSTP float ptr [ESP]
004EC46C  DB 86 00 05 00 00         FILD dword ptr [ESI + 0x500]
004EC472  51                        PUSH ECX
004EC473  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC479  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC47F  D9 1C 24                  FSTP float ptr [ESP]
004EC482  DB 86 FC 04 00 00         FILD dword ptr [ESI + 0x4fc]
004EC488  51                        PUSH ECX
004EC489  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC48F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC495  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC49B  D9 1C 24                  FSTP float ptr [ESP]
004EC49E  E8 36 81 F1 FF            CALL 0x004045d9
LAB_004ec4a3:
004EC4A3  83 BE D0 04 00 00 06      CMP dword ptr [ESI + 0x4d0],0x6
004EC4AA  0F 85 69 01 00 00         JNZ 0x004ec619
004EC4B0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EC4B5  8B 8E 14 05 00 00         MOV ECX,dword ptr [ESI + 0x514]
004EC4BB  41                        INC ECX
004EC4BC  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004EC4C2  3B C1                     CMP EAX,ECX
004EC4C4  0F 82 4F 01 00 00         JC 0x004ec619
004EC4CA  89 86 14 05 00 00         MOV dword ptr [ESI + 0x514],EAX
004EC4D0  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004EC4D6  8B BE 10 05 00 00         MOV EDI,dword ptr [ESI + 0x510]
004EC4DC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004EC4DF  47                        INC EDI
004EC4E0  89 BE 10 05 00 00         MOV dword ptr [ESI + 0x510],EDI
004EC4E6  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004EC4E9  8B 8E FC 04 00 00         MOV ECX,dword ptr [ESI + 0x4fc]
004EC4EF  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
004EC4F2  8D B8 DC 00 00 00         LEA EDI,[EAX + 0xdc]
004EC4F8  3B CF                     CMP ECX,EDI
004EC4FA  74 32                     JZ 0x004ec52e
004EC4FC  2B C1                     SUB EAX,ECX
004EC4FE  05 DC 00 00 00            ADD EAX,0xdc
004EC503  8B D8                     MOV EBX,EAX
004EC505  B8 89 88 88 88            MOV EAX,0x88888889
004EC50A  F7 EB                     IMUL EBX
004EC50C  03 D3                     ADD EDX,EBX
004EC50E  C1 FA 04                  SAR EDX,0x4
004EC511  8B C2                     MOV EAX,EDX
004EC513  C1 E8 1F                  SHR EAX,0x1f
004EC516  03 D0                     ADD EDX,EAX
004EC518  75 0C                     JNZ 0x004ec526
004EC51A  33 D2                     XOR EDX,EDX
004EC51C  3B CF                     CMP ECX,EDI
004EC51E  0F 9D C2                  SETGE DL
004EC521  4A                        DEC EDX
004EC522  83 E2 02                  AND EDX,0x2
004EC525  4A                        DEC EDX
LAB_004ec526:
004EC526  03 CA                     ADD ECX,EDX
004EC528  89 8E FC 04 00 00         MOV dword ptr [ESI + 0x4fc],ECX
LAB_004ec52e:
004EC52E  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004EC534  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004EC537  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004EC53A  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004EC53D  8B 8E 00 05 00 00         MOV ECX,dword ptr [ESI + 0x500]
004EC543  8D 58 64                  LEA EBX,[EAX + 0x64]
004EC546  3B CB                     CMP ECX,EBX
004EC548  74 30                     JZ 0x004ec57a
004EC54A  2B C1                     SUB EAX,ECX
004EC54C  83 C0 64                  ADD EAX,0x64
004EC54F  8B F8                     MOV EDI,EAX
004EC551  B8 89 88 88 88            MOV EAX,0x88888889
004EC556  F7 EF                     IMUL EDI
004EC558  03 D7                     ADD EDX,EDI
004EC55A  C1 FA 04                  SAR EDX,0x4
004EC55D  8B C2                     MOV EAX,EDX
004EC55F  C1 E8 1F                  SHR EAX,0x1f
004EC562  03 D0                     ADD EDX,EAX
004EC564  75 0C                     JNZ 0x004ec572
004EC566  33 D2                     XOR EDX,EDX
004EC568  3B CB                     CMP ECX,EBX
004EC56A  0F 9D C2                  SETGE DL
004EC56D  4A                        DEC EDX
004EC56E  83 E2 02                  AND EDX,0x2
004EC571  4A                        DEC EDX
LAB_004ec572:
004EC572  03 CA                     ADD ECX,EDX
004EC574  89 8E 00 05 00 00         MOV dword ptr [ESI + 0x500],ECX
LAB_004ec57a:
004EC57A  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004EC580  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004EC583  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004EC586  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004EC589  8B 8E 04 05 00 00         MOV ECX,dword ptr [ESI + 0x504]
004EC58F  8D 58 D8                  LEA EBX,[EAX + -0x28]
004EC592  3B CB                     CMP ECX,EBX
004EC594  74 30                     JZ 0x004ec5c6
004EC596  2B C1                     SUB EAX,ECX
004EC598  83 E8 28                  SUB EAX,0x28
004EC59B  8B F8                     MOV EDI,EAX
004EC59D  B8 89 88 88 88            MOV EAX,0x88888889
004EC5A2  F7 EF                     IMUL EDI
004EC5A4  03 D7                     ADD EDX,EDI
004EC5A6  C1 FA 04                  SAR EDX,0x4
004EC5A9  8B C2                     MOV EAX,EDX
004EC5AB  C1 E8 1F                  SHR EAX,0x1f
004EC5AE  03 D0                     ADD EDX,EAX
004EC5B0  75 0C                     JNZ 0x004ec5be
004EC5B2  33 D2                     XOR EDX,EDX
004EC5B4  3B CB                     CMP ECX,EBX
004EC5B6  0F 9D C2                  SETGE DL
004EC5B9  4A                        DEC EDX
004EC5BA  83 E2 02                  AND EDX,0x2
004EC5BD  4A                        DEC EDX
LAB_004ec5be:
004EC5BE  03 CA                     ADD ECX,EDX
004EC5C0  89 8E 04 05 00 00         MOV dword ptr [ESI + 0x504],ECX
LAB_004ec5c6:
004EC5C6  DB 86 04 05 00 00         FILD dword ptr [ESI + 0x504]
004EC5CC  51                        PUSH ECX
004EC5CD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC5D3  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC5D9  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004EC5DF  D9 1C 24                  FSTP float ptr [ESP]
004EC5E2  DB 86 00 05 00 00         FILD dword ptr [ESI + 0x500]
004EC5E8  51                        PUSH ECX
004EC5E9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC5EF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC5F5  D9 1C 24                  FSTP float ptr [ESP]
004EC5F8  DB 86 FC 04 00 00         FILD dword ptr [ESI + 0x4fc]
004EC5FE  51                        PUSH ECX
004EC5FF  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC605  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EC60B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EC611  D9 1C 24                  FSTP float ptr [ESP]
004EC614  E8 C0 7F F1 FF            CALL 0x004045d9
LAB_004ec619:
004EC619  5F                        POP EDI
004EC61A  5E                        POP ESI
004EC61B  33 C0                     XOR EAX,EAX
004EC61D  5B                        POP EBX
004EC61E  8B E5                     MOV ESP,EBP
004EC620  5D                        POP EBP
004EC621  C3                        RET
