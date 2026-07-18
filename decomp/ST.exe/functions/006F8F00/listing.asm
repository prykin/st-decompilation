FUN_006f8f00:
006F8F00  55                        PUSH EBP
006F8F01  8B EC                     MOV EBP,ESP
006F8F03  83 EC 10                  SUB ESP,0x10
006F8F06  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F8F09  53                        PUSH EBX
006F8F0A  48                        DEC EAX
006F8F0B  56                        PUSH ESI
006F8F0C  57                        PUSH EDI
006F8F0D  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F8F17  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F8F1A  0F 88 9E 05 00 00         JS 0x006f94be
006F8F20  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006f8f23:
006F8F23  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F8F26  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F8F29  83 F8 01                  CMP EAX,0x1
006F8F2C  75 49                     JNZ 0x006f8f77
006F8F2E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F8F31  48                        DEC EAX
006F8F32  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F8F35  0F 88 83 05 00 00         JS 0x006f94be
006F8F3B  33 C0                     XOR EAX,EAX
006F8F3D  8A 01                     MOV AL,byte ptr [ECX]
006F8F3F  41                        INC ECX
006F8F40  85 C0                     TEST EAX,EAX
006F8F42  74 2C                     JZ 0x006f8f70
006F8F44  8B D6                     MOV EDX,ESI
LAB_006f8f46:
006F8F46  A8 80                     TEST AL,0x80
006F8F48  74 16                     JZ 0x006f8f60
006F8F4A  A8 40                     TEST AL,0x40
006F8F4C  74 06                     JZ 0x006f8f54
006F8F4E  41                        INC ECX
006F8F4F  83 E0 3F                  AND EAX,0x3f
006F8F52  EB 0F                     JMP 0x006f8f63
LAB_006f8f54:
006F8F54  8B F8                     MOV EDI,EAX
006F8F56  83 E7 3F                  AND EDI,0x3f
006F8F59  03 CF                     ADD ECX,EDI
006F8F5B  83 E0 3F                  AND EAX,0x3f
006F8F5E  EB 03                     JMP 0x006f8f63
LAB_006f8f60:
006F8F60  83 E0 7F                  AND EAX,0x7f
LAB_006f8f63:
006F8F63  2B D0                     SUB EDX,EAX
006F8F65  85 D2                     TEST EDX,EDX
006F8F67  7E 07                     JLE 0x006f8f70
006F8F69  33 C0                     XOR EAX,EAX
006F8F6B  8A 01                     MOV AL,byte ptr [ECX]
006F8F6D  41                        INC ECX
006F8F6E  EB D6                     JMP 0x006f8f46
LAB_006f8f70:
006F8F70  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006f8f77:
006F8F77  33 C0                     XOR EAX,EAX
006F8F79  8A 01                     MOV AL,byte ptr [ECX]
006F8F7B  41                        INC ECX
006F8F7C  85 C0                     TEST EAX,EAX
006F8F7E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F8F81  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F8F84  0F 84 F3 04 00 00         JZ 0x006f947d
006F8F8A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F8F8D  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F8F90  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F8F93  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006F8F96  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F8F99  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F8F9C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006f8f9f:
006F8F9F  A8 80                     TEST AL,0x80
006F8FA1  74 20                     JZ 0x006f8fc3
006F8FA3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8FA6  83 E0 3F                  AND EAX,0x3f
006F8FA9  3B C3                     CMP EAX,EBX
006F8FAB  7F 38                     JG 0x006f8fe5
006F8FAD  F6 45 F4 40               TEST byte ptr [EBP + -0xc],0x40
006F8FB1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8FB4  74 06                     JZ 0x006f8fbc
006F8FB6  43                        INC EBX
006F8FB7  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8FBA  EB 11                     JMP 0x006f8fcd
LAB_006f8fbc:
006F8FBC  03 D8                     ADD EBX,EAX
006F8FBE  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8FC1  EB 0A                     JMP 0x006f8fcd
LAB_006f8fc3:
006F8FC3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8FC6  83 E0 7F                  AND EAX,0x7f
006F8FC9  3B C3                     CMP EAX,EBX
006F8FCB  7F 18                     JG 0x006f8fe5
LAB_006f8fcd:
006F8FCD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F8FD0  2B D8                     SUB EBX,EAX
006F8FD2  33 C0                     XOR EAX,EAX
006F8FD4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F8FD7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8FDA  8A 03                     MOV AL,byte ptr [EBX]
006F8FDC  43                        INC EBX
006F8FDD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F8FE0  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F8FE3  EB BA                     JMP 0x006f8f9f
LAB_006f8fe5:
006F8FE5  2B C3                     SUB EAX,EBX
006F8FE7  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F8FEA  81 E3 C0 00 00 00         AND EBX,0xc0
006F8FF0  80 FB 80                  CMP BL,0x80
006F8FF3  75 0E                     JNZ 0x006f9003
006F8FF5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F8FF8  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8FFB  03 DA                     ADD EBX,EDX
006F8FFD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F9000  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f9003:
006F9003  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F9006  3B C3                     CMP EAX,EBX
006F9008  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F900B  0F 8F 40 02 00 00         JG 0x006f9251
006F9011  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F9014  81 E3 80 00 00 00         AND EBX,0x80
006F901A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_006f901d:
006F901D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9020  2B D8                     SUB EBX,EAX
006F9022  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F9025  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006F9028  85 DB                     TEST EBX,EBX
006F902A  0F 84 E5 01 00 00         JZ 0x006f9215
006F9030  F6 45 F4 40               TEST byte ptr [EBP + -0xc],0x40
006F9034  0F 84 03 01 00 00         JZ 0x006f913d
006F903A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F903D  33 D2                     XOR EDX,EDX
006F903F  8A 13                     MOV DL,byte ptr [EBX]
006F9041  43                        INC EBX
006F9042  85 F6                     TEST ESI,ESI
006F9044  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006F9047  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F904A  7E 4E                     JLE 0x006f909a
006F904C  83 FE 01                  CMP ESI,0x1
006F904F  75 06                     JNZ 0x006f9057
006F9051  BE 02 00 00 00            MOV ESI,0x2
006F9056  48                        DEC EAX
LAB_006f9057:
006F9057  85 C0                     TEST EAX,EAX
006F9059  0F 8E D8 01 00 00         JLE 0x006f9237
006F905F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F9062  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9065  33 F6                     XOR ESI,ESI
006F9067  66 8B 32                  MOV SI,word ptr [EDX]
006F906A  3B DE                     CMP EBX,ESI
006F906C  77 12                     JA 0x006f9080
006F906E  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006F9071  83 C2 02                  ADD EDX,0x2
006F9074  88 19                     MOV byte ptr [ECX],BL
006F9076  41                        INC ECX
006F9077  47                        INC EDI
006F9078  33 F6                     XOR ESI,ESI
006F907A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F907D  48                        DEC EAX
006F907E  EB 1D                     JMP 0x006f909d
LAB_006f9080:
006F9080  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F9083  33 DB                     XOR EBX,EBX
006F9085  8A 1F                     MOV BL,byte ptr [EDI]
006F9087  83 C2 02                  ADD EDX,0x2
006F908A  41                        INC ECX
006F908B  47                        INC EDI
006F908C  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006F908F  33 F6                     XOR ESI,ESI
006F9091  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
006F9094  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F9097  48                        DEC EAX
006F9098  EB 03                     JMP 0x006f909d
LAB_006f909a:
006F909A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006f909d:
006F909D  85 C0                     TEST EAX,EAX
006F909F  7E 62                     JLE 0x006f9103
LAB_006f90a1:
006F90A1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F90A4  33 F6                     XOR ESI,ESI
006F90A6  66 8B 32                  MOV SI,word ptr [EDX]
006F90A9  3B DE                     CMP EBX,ESI
006F90AB  77 05                     JA 0x006f90b2
006F90AD  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006F90B0  EB 0A                     JMP 0x006f90bc
LAB_006f90b2:
006F90B2  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F90B5  33 DB                     XOR EBX,EBX
006F90B7  8A 1F                     MOV BL,byte ptr [EDI]
006F90B9  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f90bc:
006F90BC  88 19                     MOV byte ptr [ECX],BL
006F90BE  83 C2 02                  ADD EDX,0x2
006F90C1  41                        INC ECX
006F90C2  47                        INC EDI
006F90C3  48                        DEC EAX
006F90C4  BE 01 00 00 00            MOV ESI,0x1
006F90C9  85 C0                     TEST EAX,EAX
006F90CB  7E 33                     JLE 0x006f9100
006F90CD  48                        DEC EAX
006F90CE  BE 02 00 00 00            MOV ESI,0x2
006F90D3  85 C0                     TEST EAX,EAX
006F90D5  7E 29                     JLE 0x006f9100
006F90D7  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F90DA  33 F6                     XOR ESI,ESI
006F90DC  66 8B 32                  MOV SI,word ptr [EDX]
006F90DF  3B DE                     CMP EBX,ESI
006F90E1  77 05                     JA 0x006f90e8
006F90E3  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
006F90E6  EB 0A                     JMP 0x006f90f2
LAB_006f90e8:
006F90E8  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F90EB  33 DB                     XOR EBX,EBX
006F90ED  8A 1F                     MOV BL,byte ptr [EDI]
006F90EF  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f90f2:
006F90F2  88 19                     MOV byte ptr [ECX],BL
006F90F4  83 C2 02                  ADD EDX,0x2
006F90F7  41                        INC ECX
006F90F8  47                        INC EDI
006F90F9  33 F6                     XOR ESI,ESI
006F90FB  48                        DEC EAX
006F90FC  85 C0                     TEST EAX,EAX
006F90FE  7F A1                     JG 0x006f90a1
LAB_006f9100:
006F9100  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006f9103:
006F9103  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9106  85 DB                     TEST EBX,EBX
006F9108  0F 8E 41 01 00 00         JLE 0x006f924f
006F910E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9111  33 C0                     XOR EAX,EAX
006F9113  8A 03                     MOV AL,byte ptr [EBX]
006F9115  8B D8                     MOV EBX,EAX
006F9117  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F911A  81 E3 80 00 00 00         AND EBX,0x80
006F9120  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F9123  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9126  43                        INC EBX
006F9127  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F912A  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006F912D  85 DB                     TEST EBX,EBX
006F912F  0F 84 0A 01 00 00         JZ 0x006f923f
006F9135  83 E0 3F                  AND EAX,0x3f
006F9138  E9 05 01 00 00            JMP 0x006f9242
LAB_006f913d:
006F913D  85 F6                     TEST ESI,ESI
006F913F  7E 47                     JLE 0x006f9188
006F9141  83 FE 01                  CMP ESI,0x1
006F9144  75 0D                     JNZ 0x006f9153
006F9146  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F9149  46                        INC ESI
006F914A  48                        DEC EAX
006F914B  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F914E  BE 02 00 00 00            MOV ESI,0x2
LAB_006f9153:
006F9153  85 C0                     TEST EAX,EAX
006F9155  7E AC                     JLE 0x006f9103
006F9157  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F915A  33 F6                     XOR ESI,ESI
006F915C  66 8B 32                  MOV SI,word ptr [EDX]
006F915F  3B DE                     CMP EBX,ESI
006F9161  77 07                     JA 0x006f916a
006F9163  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F9166  8A 1E                     MOV BL,byte ptr [ESI]
006F9168  EB 0A                     JMP 0x006f9174
LAB_006f916a:
006F916A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F916D  33 DB                     XOR EBX,EBX
006F916F  8A 1F                     MOV BL,byte ptr [EDI]
006F9171  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f9174:
006F9174  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F9177  88 19                     MOV byte ptr [ECX],BL
006F9179  83 C2 02                  ADD EDX,0x2
006F917C  41                        INC ECX
006F917D  47                        INC EDI
006F917E  46                        INC ESI
006F917F  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F9182  33 F6                     XOR ESI,ESI
006F9184  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F9187  48                        DEC EAX
LAB_006f9188:
006F9188  85 C0                     TEST EAX,EAX
006F918A  0F 8E 73 FF FF FF         JLE 0x006f9103
LAB_006f9190:
006F9190  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9193  33 F6                     XOR ESI,ESI
006F9195  66 8B 32                  MOV SI,word ptr [EDX]
006F9198  3B DE                     CMP EBX,ESI
006F919A  77 07                     JA 0x006f91a3
006F919C  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F919F  8A 1E                     MOV BL,byte ptr [ESI]
006F91A1  EB 0A                     JMP 0x006f91ad
LAB_006f91a3:
006F91A3  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F91A6  33 DB                     XOR EBX,EBX
006F91A8  8A 1F                     MOV BL,byte ptr [EDI]
006F91AA  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f91ad:
006F91AD  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F91B0  88 19                     MOV byte ptr [ECX],BL
006F91B2  83 C2 02                  ADD EDX,0x2
006F91B5  41                        INC ECX
006F91B6  47                        INC EDI
006F91B7  46                        INC ESI
006F91B8  48                        DEC EAX
006F91B9  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F91BC  85 C0                     TEST EAX,EAX
006F91BE  BE 01 00 00 00            MOV ESI,0x1
006F91C3  0F 8E 37 FF FF FF         JLE 0x006f9100
006F91C9  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F91CC  46                        INC ESI
006F91CD  48                        DEC EAX
006F91CE  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F91D1  BE 02 00 00 00            MOV ESI,0x2
006F91D6  85 C0                     TEST EAX,EAX
006F91D8  0F 8E 22 FF FF FF         JLE 0x006f9100
006F91DE  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F91E1  33 F6                     XOR ESI,ESI
006F91E3  66 8B 32                  MOV SI,word ptr [EDX]
006F91E6  3B DE                     CMP EBX,ESI
006F91E8  77 07                     JA 0x006f91f1
006F91EA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F91ED  8A 1E                     MOV BL,byte ptr [ESI]
006F91EF  EB 0A                     JMP 0x006f91fb
LAB_006f91f1:
006F91F1  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F91F4  33 DB                     XOR EBX,EBX
006F91F6  8A 1F                     MOV BL,byte ptr [EDI]
006F91F8  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f91fb:
006F91FB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F91FE  88 19                     MOV byte ptr [ECX],BL
006F9200  83 C2 02                  ADD EDX,0x2
006F9203  41                        INC ECX
006F9204  47                        INC EDI
006F9205  46                        INC ESI
006F9206  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F9209  33 F6                     XOR ESI,ESI
006F920B  48                        DEC EAX
006F920C  85 C0                     TEST EAX,EAX
006F920E  7F 80                     JG 0x006f9190
006F9210  E9 EB FE FF FF            JMP 0x006f9100
LAB_006f9215:
006F9215  48                        DEC EAX
006F9216  0F 88 E7 FE FF FF         JS 0x006f9103
006F921C  40                        INC EAX
LAB_006f921d:
006F921D  83 FE 01                  CMP ESI,0x1
006F9220  74 05                     JZ 0x006f9227
006F9222  41                        INC ECX
006F9223  47                        INC EDI
006F9224  83 C2 02                  ADD EDX,0x2
LAB_006f9227:
006F9227  46                        INC ESI
006F9228  83 FE 02                  CMP ESI,0x2
006F922B  7E 02                     JLE 0x006f922f
006F922D  33 F6                     XOR ESI,ESI
LAB_006f922f:
006F922F  48                        DEC EAX
006F9230  75 EB                     JNZ 0x006f921d
006F9232  E9 C9 FE FF FF            JMP 0x006f9100
LAB_006f9237:
006F9237  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F923A  E9 C4 FE FF FF            JMP 0x006f9103
LAB_006f923f:
006F923F  83 E0 7F                  AND EAX,0x7f
LAB_006f9242:
006F9242  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F9245  3B C3                     CMP EAX,EBX
006F9247  0F 8E D0 FD FF FF         JLE 0x006f901d
006F924D  EB 02                     JMP 0x006f9251
LAB_006f924f:
006F924F  33 C0                     XOR EAX,EAX
LAB_006f9251:
006F9251  2B C3                     SUB EAX,EBX
006F9253  85 DB                     TEST EBX,EBX
006F9255  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F9258  0F 8E C7 01 00 00         JLE 0x006f9425
006F925E  F6 C3 80                  TEST BL,0x80
006F9261  0F 84 BE 01 00 00         JZ 0x006f9425
006F9267  F6 C3 40                  TEST BL,0x40
006F926A  0F 84 DC 00 00 00         JZ 0x006f934c
006F9270  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9273  33 D2                     XOR EDX,EDX
006F9275  8A 13                     MOV DL,byte ptr [EBX]
006F9277  43                        INC EBX
006F9278  85 F6                     TEST ESI,ESI
006F927A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006F927D  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9280  7E 4D                     JLE 0x006f92cf
006F9282  83 FE 01                  CMP ESI,0x1
006F9285  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F9288  75 01                     JNZ 0x006f928b
006F928A  4E                        DEC ESI
LAB_006f928b:
006F928B  85 F6                     TEST ESI,ESI
006F928D  0F 8E 8F 01 00 00         JLE 0x006f9422
006F9293  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F9296  33 D2                     XOR EDX,EDX
006F9298  66 8B 13                  MOV DX,word ptr [EBX]
006F929B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F929E  3B DA                     CMP EBX,EDX
006F92A0  77 13                     JA 0x006f92b5
006F92A2  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006F92A5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F92A8  88 11                     MOV byte ptr [ECX],DL
006F92AA  83 C3 02                  ADD EBX,0x2
006F92AD  41                        INC ECX
006F92AE  47                        INC EDI
006F92AF  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F92B2  4E                        DEC ESI
006F92B3  EB 1D                     JMP 0x006f92d2
LAB_006f92b5:
006F92B5  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F92B8  33 D2                     XOR EDX,EDX
006F92BA  8A 17                     MOV DL,byte ptr [EDI]
006F92BC  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
006F92BF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F92C2  88 11                     MOV byte ptr [ECX],DL
006F92C4  83 C3 02                  ADD EBX,0x2
006F92C7  41                        INC ECX
006F92C8  47                        INC EDI
006F92C9  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F92CC  4E                        DEC ESI
006F92CD  EB 03                     JMP 0x006f92d2
LAB_006f92cf:
006F92CF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006f92d2:
006F92D2  85 F6                     TEST ESI,ESI
006F92D4  0F 8E 48 01 00 00         JLE 0x006f9422
LAB_006f92da:
006F92DA  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F92DD  33 D2                     XOR EDX,EDX
006F92DF  66 8B 13                  MOV DX,word ptr [EBX]
006F92E2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F92E5  3B DA                     CMP EBX,EDX
006F92E7  77 05                     JA 0x006f92ee
006F92E9  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006F92EC  EB 0A                     JMP 0x006f92f8
LAB_006f92ee:
006F92EE  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F92F1  33 D2                     XOR EDX,EDX
006F92F3  8A 17                     MOV DL,byte ptr [EDI]
006F92F5  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006f92f8:
006F92F8  88 11                     MOV byte ptr [ECX],DL
006F92FA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F92FD  83 C2 02                  ADD EDX,0x2
006F9300  41                        INC ECX
006F9301  47                        INC EDI
006F9302  4E                        DEC ESI
006F9303  85 F6                     TEST ESI,ESI
006F9305  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F9308  0F 8E 14 01 00 00         JLE 0x006f9422
006F930E  4E                        DEC ESI
006F930F  85 F6                     TEST ESI,ESI
006F9311  0F 8E 0B 01 00 00         JLE 0x006f9422
006F9317  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F931A  33 D2                     XOR EDX,EDX
006F931C  66 8B 13                  MOV DX,word ptr [EBX]
006F931F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9322  3B DA                     CMP EBX,EDX
006F9324  77 05                     JA 0x006f932b
006F9326  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006F9329  EB 0A                     JMP 0x006f9335
LAB_006f932b:
006F932B  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F932E  33 D2                     XOR EDX,EDX
006F9330  8A 17                     MOV DL,byte ptr [EDI]
006F9332  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006f9335:
006F9335  88 11                     MOV byte ptr [ECX],DL
006F9337  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F933A  83 C2 02                  ADD EDX,0x2
006F933D  41                        INC ECX
006F933E  47                        INC EDI
006F933F  4E                        DEC ESI
006F9340  85 F6                     TEST ESI,ESI
006F9342  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F9345  7F 93                     JG 0x006f92da
006F9347  E9 D6 00 00 00            JMP 0x006f9422
LAB_006f934c:
006F934C  85 F6                     TEST ESI,ESI
006F934E  7E 53                     JLE 0x006f93a3
006F9350  83 FE 01                  CMP ESI,0x1
006F9353  75 0E                     JNZ 0x006f9363
006F9355  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F9358  46                        INC ESI
006F9359  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F935C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F935F  4E                        DEC ESI
006F9360  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006f9363:
006F9363  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F9366  85 F6                     TEST ESI,ESI
006F9368  0F 8E B7 00 00 00         JLE 0x006f9425
006F936E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9371  33 F6                     XOR ESI,ESI
006F9373  66 8B 32                  MOV SI,word ptr [EDX]
006F9376  3B DE                     CMP EBX,ESI
006F9378  77 07                     JA 0x006f9381
006F937A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F937D  8A 1E                     MOV BL,byte ptr [ESI]
006F937F  EB 0A                     JMP 0x006f938b
LAB_006f9381:
006F9381  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F9384  33 DB                     XOR EBX,EBX
006F9386  8A 1F                     MOV BL,byte ptr [EDI]
006F9388  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f938b:
006F938B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F938E  88 19                     MOV byte ptr [ECX],BL
006F9390  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9393  83 C2 02                  ADD EDX,0x2
006F9396  41                        INC ECX
006F9397  47                        INC EDI
006F9398  43                        INC EBX
006F9399  4E                        DEC ESI
006F939A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F939D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F93A0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006f93a3:
006F93A3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F93A6  85 F6                     TEST ESI,ESI
006F93A8  7E 7B                     JLE 0x006f9425
LAB_006f93aa:
006F93AA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F93AD  33 F6                     XOR ESI,ESI
006F93AF  66 8B 32                  MOV SI,word ptr [EDX]
006F93B2  3B DE                     CMP EBX,ESI
006F93B4  77 07                     JA 0x006f93bd
006F93B6  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F93B9  8A 1E                     MOV BL,byte ptr [ESI]
006F93BB  EB 0A                     JMP 0x006f93c7
LAB_006f93bd:
006F93BD  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F93C0  33 DB                     XOR EBX,EBX
006F93C2  8A 1F                     MOV BL,byte ptr [EDI]
006F93C4  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f93c7:
006F93C7  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F93CA  88 19                     MOV byte ptr [ECX],BL
006F93CC  83 C2 02                  ADD EDX,0x2
006F93CF  41                        INC ECX
006F93D0  47                        INC EDI
006F93D1  46                        INC ESI
006F93D2  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F93D5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F93D8  4E                        DEC ESI
006F93D9  85 F6                     TEST ESI,ESI
006F93DB  7E 45                     JLE 0x006f9422
006F93DD  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F93E0  43                        INC EBX
006F93E1  4E                        DEC ESI
006F93E2  85 F6                     TEST ESI,ESI
006F93E4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F93E7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006F93EA  7E 36                     JLE 0x006f9422
006F93EC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F93EF  33 F6                     XOR ESI,ESI
006F93F1  66 8B 32                  MOV SI,word ptr [EDX]
006F93F4  3B DE                     CMP EBX,ESI
006F93F6  77 07                     JA 0x006f93ff
006F93F8  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F93FB  8A 1E                     MOV BL,byte ptr [ESI]
006F93FD  EB 0A                     JMP 0x006f9409
LAB_006f93ff:
006F93FF  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F9402  33 DB                     XOR EBX,EBX
006F9404  8A 1F                     MOV BL,byte ptr [EDI]
006F9406  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006f9409:
006F9409  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F940C  88 19                     MOV byte ptr [ECX],BL
006F940E  83 C2 02                  ADD EDX,0x2
006F9411  41                        INC ECX
006F9412  47                        INC EDI
006F9413  46                        INC ESI
006F9414  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F9417  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F941A  4E                        DEC ESI
006F941B  85 F6                     TEST ESI,ESI
006F941D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006F9420  7F 88                     JG 0x006f93aa
LAB_006f9422:
006F9422  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_006f9425:
006F9425  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F9428  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F942B  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F942E  8B CE                     MOV ECX,ESI
006F9430  2B CA                     SUB ECX,EDX
006F9432  2B CF                     SUB ECX,EDI
006F9434  3B C1                     CMP EAX,ECX
006F9436  7D 37                     JGE 0x006f946f
LAB_006f9438:
006F9438  81 E3 C0 00 00 00         AND EBX,0xc0
006F943E  2B C8                     SUB ECX,EAX
006F9440  80 FB 80                  CMP BL,0x80
006F9443  75 03                     JNZ 0x006f9448
006F9445  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006f9448:
006F9448  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F944B  33 DB                     XOR EBX,EBX
006F944D  8A 1F                     MOV BL,byte ptr [EDI]
006F944F  8B C3                     MOV EAX,EBX
006F9451  24 80                     AND AL,0x80
006F9453  47                        INC EDI
006F9454  84 C0                     TEST AL,AL
006F9456  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F9459  8B C3                     MOV EAX,EBX
006F945B  74 0E                     JZ 0x006f946b
006F945D  83 E0 3F                  AND EAX,0x3f
006F9460  F6 C3 40                  TEST BL,0x40
006F9463  74 06                     JZ 0x006f946b
006F9465  8B D7                     MOV EDX,EDI
006F9467  42                        INC EDX
006F9468  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006f946b:
006F946B  3B C1                     CMP EAX,ECX
006F946D  7C C9                     JL 0x006f9438
LAB_006f946f:
006F946F  81 E3 C0 00 00 00         AND EBX,0xc0
006F9475  80 FB 80                  CMP BL,0x80
006F9478  75 03                     JNZ 0x006f947d
006F947A  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f947d:
006F947D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F9480  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F9483  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F9486  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006F9489  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006F948C  03 C1                     ADD EAX,ECX
006F948E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F9491  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F9494  03 F8                     ADD EDI,EAX
006F9496  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F9499  03 DA                     ADD EBX,EDX
006F949B  40                        INC EAX
006F949C  83 F8 02                  CMP EAX,0x2
006F949F  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
006F94A2  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F94A5  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006F94A8  7E 07                     JLE 0x006f94b1
006F94AA  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006f94b1:
006F94B1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F94B4  48                        DEC EAX
006F94B5  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F94B8  0F 89 65 FA FF FF         JNS 0x006f8f23
LAB_006f94be:
006F94BE  5F                        POP EDI
006F94BF  5E                        POP ESI
006F94C0  5B                        POP EBX
006F94C1  8B E5                     MOV ESP,EBP
006F94C3  5D                        POP EBP
006F94C4  C2 3C 00                  RET 0x3c
