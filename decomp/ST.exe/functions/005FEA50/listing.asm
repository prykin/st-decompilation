FUN_005fea50:
005FEA50  8B 81 26 02 00 00         MOV EAX,dword ptr [ECX + 0x226]
005FEA56  57                        PUSH EDI
005FEA57  33 FF                     XOR EDI,EDI
005FEA59  85 C0                     TEST EAX,EAX
005FEA5B  0F 8E BB 00 00 00         JLE 0x005feb1c
005FEA61  53                        PUSH EBX
005FEA62  56                        PUSH ESI
005FEA63  33 D2                     XOR EDX,EDX
005FEA65  33 F6                     XOR ESI,ESI
LAB_005fea67:
005FEA67  8B 81 33 02 00 00         MOV EAX,dword ptr [ECX + 0x233]
005FEA6D  C7 44 02 39 02 00 00 00   MOV dword ptr [EDX + EAX*0x1 + 0x39],0x2
005FEA75  8B 81 2E 02 00 00         MOV EAX,dword ptr [ECX + 0x22e]
005FEA7B  83 F8 05                  CMP EAX,0x5
005FEA7E  74 14                     JZ 0x005fea94
005FEA80  83 F8 06                  CMP EAX,0x6
005FEA83  74 0F                     JZ 0x005fea94
005FEA85  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FEA8A  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005FEA90  03 C6                     ADD EAX,ESI
005FEA92  EB 67                     JMP 0x005feafb
LAB_005fea94:
005FEA94  83 FE 51                  CMP ESI,0x51
005FEA97  73 19                     JNC 0x005feab2
005FEA99  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005FEA9C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FEAA2  05 39 30 00 00            ADD EAX,0x3039
005FEAA7  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005FEAAA  C1 E8 10                  SHR EAX,0x10
005FEAAD  83 E0 07                  AND EAX,0x7
005FEAB0  EB 49                     JMP 0x005feafb
LAB_005feab2:
005FEAB2  83 F8 05                  CMP EAX,0x5
005FEAB5  75 11                     JNZ 0x005feac8
005FEAB7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FEABC  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005FEAC2  8D 44 30 B6               LEA EAX,[EAX + ESI*0x1 + -0x4a]
005FEAC6  EB 33                     JMP 0x005feafb
LAB_005feac8:
005FEAC8  81 FE 99 00 00 00         CMP ESI,0x99
005FEACE  73 19                     JNC 0x005feae9
005FEAD0  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005FEAD3  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FEAD9  05 39 30 00 00            ADD EAX,0x3039
005FEADE  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005FEAE1  C1 E8 10                  SHR EAX,0x10
005FEAE4  83 E0 07                  AND EAX,0x7
005FEAE7  EB 12                     JMP 0x005feafb
LAB_005feae9:
005FEAE9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FEAEE  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005FEAF4  8D 84 30 6C FF FF FF      LEA EAX,[EAX + ESI*0x1 + 0xffffff6c]
LAB_005feafb:
005FEAFB  8B 99 33 02 00 00         MOV EBX,dword ptr [ECX + 0x233]
005FEB01  47                        INC EDI
005FEB02  83 C6 09                  ADD ESI,0x9
005FEB05  89 44 1A 3D               MOV dword ptr [EDX + EBX*0x1 + 0x3d],EAX
005FEB09  8B 81 26 02 00 00         MOV EAX,dword ptr [ECX + 0x226]
005FEB0F  83 C2 52                  ADD EDX,0x52
005FEB12  3B F8                     CMP EDI,EAX
005FEB14  0F 8C 4D FF FF FF         JL 0x005fea67
005FEB1A  5E                        POP ESI
005FEB1B  5B                        POP EBX
LAB_005feb1c:
005FEB1C  5F                        POP EDI
005FEB1D  C3                        RET
