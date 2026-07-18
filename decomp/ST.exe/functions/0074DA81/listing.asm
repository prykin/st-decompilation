FUN_0074da81:
0074DA81  55                        PUSH EBP
0074DA82  8B EC                     MOV EBP,ESP
0074DA84  83 EC 18                  SUB ESP,0x18
0074DA87  53                        PUSH EBX
0074DA88  56                        PUSH ESI
0074DA89  57                        PUSH EDI
0074DA8A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074DA8D  85 FF                     TEST EDI,EDI
0074DA8F  7C 0F                     JL 0x0074daa0
0074DA91  7F 06                     JG 0x0074da99
0074DA93  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074DA97  72 07                     JC 0x0074daa0
LAB_0074da99:
0074DA99  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074DA9C  8B F7                     MOV ESI,EDI
0074DA9E  EB 0C                     JMP 0x0074daac
LAB_0074daa0:
0074DAA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074DAA3  8B F7                     MOV ESI,EDI
0074DAA5  F7 D8                     NEG EAX
0074DAA7  83 D6 00                  ADC ESI,0x0
0074DAAA  F7 DE                     NEG ESI
LAB_0074daac:
0074DAAC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0074DAAF  85 D2                     TEST EDX,EDX
0074DAB1  8B DA                     MOV EBX,EDX
0074DAB3  7D 02                     JGE 0x0074dab7
0074DAB5  F7 DB                     NEG EBX
LAB_0074dab7:
0074DAB7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0074DABA  85 C9                     TEST ECX,ECX
0074DABC  7D 02                     JGE 0x0074dac0
0074DABE  F7 D9                     NEG ECX
LAB_0074dac0:
0074DAC0  85 FF                     TEST EDI,EDI
0074DAC2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0074DAC5  7F 0D                     JG 0x0074dad4
0074DAC7  7C 06                     JL 0x0074dacf
0074DAC9  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074DACD  73 05                     JNC 0x0074dad4
LAB_0074dacf:
0074DACF  6A 01                     PUSH 0x1
0074DAD1  5F                        POP EDI
0074DAD2  EB 02                     JMP 0x0074dad6
LAB_0074dad4:
0074DAD4  33 FF                     XOR EDI,EDI
LAB_0074dad6:
0074DAD6  33 C9                     XOR ECX,ECX
0074DAD8  85 D2                     TEST EDX,EDX
0074DADA  0F 9C C1                  SETL CL
0074DADD  33 CF                     XOR ECX,EDI
0074DADF  33 FF                     XOR EDI,EDI
0074DAE1  57                        PUSH EDI
0074DAE2  53                        PUSH EBX
0074DAE3  57                        PUSH EDI
0074DAE4  50                        PUSH EAX
0074DAE5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074DAE8  E8 03 0A FE FF            CALL 0x0072e4f0
0074DAED  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0074DAF0  33 D2                     XOR EDX,EDX
0074DAF2  3B F2                     CMP ESI,EDX
0074DAF4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0074DAF7  74 13                     JZ 0x0074db0c
0074DAF9  57                        PUSH EDI
0074DAFA  53                        PUSH EBX
0074DAFB  52                        PUSH EDX
0074DAFC  56                        PUSH ESI
0074DAFD  E8 EE 09 FE FF            CALL 0x0072e4f0
0074DB02  33 C9                     XOR ECX,ECX
0074DB04  03 45 F4                  ADD EAX,dword ptr [EBP + -0xc]
0074DB07  13 D1                     ADC EDX,ECX
0074DB09  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0074db0c:
0074DB0C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0074DB0F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0074DB12  85 F6                     TEST ESI,ESI
0074DB14  74 7F                     JZ 0x0074db95
0074DB16  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0074DB1A  8B C6                     MOV EAX,ESI
0074DB1C  99                        CDQ
0074DB1D  74 10                     JZ 0x0074db2f
0074DB1F  F7 D8                     NEG EAX
0074DB21  83 D2 00                  ADC EDX,0x0
0074DB24  33 C9                     XOR ECX,ECX
0074DB26  F7 DA                     NEG EDX
0074DB28  85 F6                     TEST ESI,ESI
0074DB2A  0F 9E C1                  SETLE CL
0074DB2D  EB 07                     JMP 0x0074db36
LAB_0074db2f:
0074DB2F  33 C9                     XOR ECX,ECX
0074DB31  85 F6                     TEST ESI,ESI
0074DB33  0F 9D C1                  SETGE CL
LAB_0074db36:
0074DB36  49                        DEC ECX
0074DB37  33 F6                     XOR ESI,ESI
0074DB39  8B F9                     MOV EDI,ECX
0074DB3B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0074DB3E  33 DB                     XOR EBX,EBX
0074DB40  03 C8                     ADD ECX,EAX
0074DB42  13 F3                     ADC ESI,EBX
0074DB44  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0074DB47  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0074DB4A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0074DB4D  33 C0                     XOR EAX,EAX
0074DB4F  33 C9                     XOR ECX,ECX
0074DB51  03 F2                     ADD ESI,EDX
0074DB53  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074DB56  13 D9                     ADC EBX,ECX
0074DB58  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0074DB5B  03 CE                     ADD ECX,ESI
0074DB5D  13 C3                     ADC EAX,EBX
0074DB5F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0074DB62  03 C7                     ADD EAX,EDI
0074DB64  03 D0                     ADD EDX,EAX
0074DB66  79 2D                     JNS 0x0074db95
0074DB68  33 C0                     XOR EAX,EAX
0074DB6A  33 C9                     XOR ECX,ECX
0074DB6C  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
0074DB6F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0074DB72  F7 D6                     NOT ESI
0074DB74  0F 94 C1                  SETZ CL
0074DB77  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074DB7A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0074DB7D  F7 D1                     NOT ECX
0074DB7F  83 C1 01                  ADD ECX,0x1
0074DB82  13 F0                     ADC ESI,EAX
0074DB84  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0074DB87  0B CE                     OR ECX,ESI
0074DB89  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0074DB8C  F7 D2                     NOT EDX
0074DB8E  75 03                     JNZ 0x0074db93
0074DB90  6A 01                     PUSH 0x1
0074DB92  58                        POP EAX
LAB_0074db93:
0074DB93  03 D0                     ADD EDX,EAX
LAB_0074db95:
0074DB95  33 C9                     XOR ECX,ECX
0074DB97  39 4D 14                  CMP dword ptr [EBP + 0x14],ECX
0074DB9A  7D 0B                     JGE 0x0074dba7
0074DB9C  33 C0                     XOR EAX,EAX
0074DB9E  39 4D 10                  CMP dword ptr [EBP + 0x10],ECX
0074DBA1  0F 94 C0                  SETZ AL
0074DBA4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0074dba7:
0074DBA7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074DBAA  3B C2                     CMP EAX,EDX
0074DBAC  77 18                     JA 0x0074dbc6
0074DBAE  39 4D 10                  CMP dword ptr [EBP + 0x10],ECX
0074DBB1  74 09                     JZ 0x0074dbbc
0074DBB3  33 C0                     XOR EAX,EAX
0074DBB5  BA 00 00 00 80            MOV EDX,0x80000000
0074DBBA  EB 77                     JMP 0x0074dc33
LAB_0074dbbc:
0074DBBC  83 C8 FF                  OR EAX,0xffffffff
0074DBBF  BA FF FF FF 7F            MOV EDX,0x7fffffff
0074DBC4  EB 6D                     JMP 0x0074dc33
LAB_0074dbc6:
0074DBC6  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0074DBC9  3B D1                     CMP EDX,ECX
0074DBCB  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0074DBCE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0074DBD1  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0074DBD4  72 26                     JC 0x0074dbfc
0074DBD6  77 04                     JA 0x0074dbdc
0074DBD8  3B F0                     CMP ESI,EAX
0074DBDA  72 20                     JC 0x0074dbfc
LAB_0074dbdc:
0074DBDC  8D 45 F4                  LEA EAX,[EBP + -0xc]
0074DBDF  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0074DBE2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074DBE5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074DBE8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0074DBEB  F7 75 14                  DIV dword ptr [EBP + 0x14]
0074DBEE  0B C9                     OR ECX,ECX
0074DBF0  74 02                     JZ 0x0074dbf4
0074DBF2  89 11                     MOV dword ptr [ECX],EDX
LAB_0074dbf4:
0074DBF4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074DBF7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074DBFA  EB 02                     JMP 0x0074dbfe
LAB_0074dbfc:
0074DBFC  33 F6                     XOR ESI,ESI
LAB_0074dbfe:
0074DBFE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074DC01  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074DC04  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074DC07  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074DC0A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074DC0D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074DC10  B9 00 00 00 00            MOV ECX,0x0
0074DC15  F7 75 14                  DIV dword ptr [EBP + 0x14]
0074DC18  0B C9                     OR ECX,ECX
0074DC1A  74 02                     JZ 0x0074dc1e
0074DC1C  89 11                     MOV dword ptr [ECX],EDX
LAB_0074dc1e:
0074DC1E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0074DC21  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0074DC25  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0074DC28  74 07                     JZ 0x0074dc31
0074DC2A  F7 D8                     NEG EAX
0074DC2C  83 D6 00                  ADC ESI,0x0
0074DC2F  F7 DE                     NEG ESI
LAB_0074dc31:
0074DC31  8B D6                     MOV EDX,ESI
LAB_0074dc33:
0074DC33  5F                        POP EDI
0074DC34  5E                        POP ESI
0074DC35  5B                        POP EBX
0074DC36  C9                        LEAVE
0074DC37  C2 14 00                  RET 0x14
