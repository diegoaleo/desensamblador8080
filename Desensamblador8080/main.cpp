#include <iostream>
#include <stdio.h>
#include  <iomanip>

using namespace std;


// desensamblar = pasar de binario a ensamblador

int desensamblar8080 (unsigned int instrucciones[], int cp){ //cp = contador programa

    // es unsigned para tener el rango de 0x00 a 0xFF (0-255 en decimal)



    /*
        Fuente para los codigos de operaci—n
        http://www.emulator101.com/8080-by-opcode.html

    */



    unsigned int* instr = &instrucciones[cp];

    int opbytes = 1; // se refiere al tama–o de bytes de una instrucci—n

    /**/


    switch (instr[0]){

        //Si tiene un # al principio, significa direccionamiento inmediato
        // $= hexadecimal

        case 0x00: cout << "NOP" << endl; break;
        case 0x01: cout << "LXI B, #$"  << setfill('0') <<setw(2)<<hex<<instr[2] << setw(2) << instr[1]<<endl;
          opbytes =3;
            break;
        case 0x02: cout << "STAX B" << endl; break;
        case 0x03: cout << "INX B" << endl; break;
        case 0x04: cout << "INR B" << endl; break;
        case 0x05: cout << "DCR B" << endl; break;
        case 0x06: cout << "NOP" << endl; break;
        case 0x07: cout << "MVI B, #$" << setfill('0') <<setw(2)<<hex<<instr[1]<<endl; opbytes=2; break;
        case 0x08: cout << "-" << endl; break;
        case 0x09: cout << "DAD B" << endl; break;
        case 0x0A: cout << "LDAX B" << endl; break;
        case 0x0B: cout << "DCX B" << endl; break;
        case 0x0C: cout << "" << endl; break;
        case 0x0D: cout << "1" << endl; break;
        case 0x0E: cout << "A" << endl; break;
        case 0x0F: cout << "1" << endl; break;

        case 0x10: cout << "NOP" << endl; break;
        case 0x11: cout << "1" << endl; break;
        case 0x12: cout << "1" << endl; break;
        case 0x13: cout << "NOP" << endl; break;
        case 0x14: cout << "1" << endl; break;
        case 0x15: cout << "1" << endl; break;
        case 0x16: cout << "NOP" << endl; break;
        case 0x17: cout << "1" << endl; break;
        case 0x18: cout << "1" << endl; break;
        case 0x19: cout << "NOP" << endl; break;
        case 0x1A: cout << "A" << endl; break;
        case 0x1B: cout << "1" << endl; break;
        case 0x1C: cout << "A" << endl; break;
        case 0x1D: cout << "1" << endl; break;
        case 0x1E: cout << "A" << endl; break;
        case 0x1F: cout << "1" << endl; break;

        case 0x20: cout << "NOP" << endl; break;
        case 0x21: cout << "1" << endl; break;
        case 0x22: cout << "1" << endl; break;
        case 0x23: cout << "NOP" << endl; break;
        case 0x24: cout << "1" << endl; break;
        case 0x25: cout << "1" << endl; break;
        case 0x26: cout << "NOP" << endl; break;
        case 0x27: cout << "1" << endl; break;
        case 0x28: cout << "1" << endl; break;
        case 0x29: cout << "NOP" << endl; break;
        case 0x2A: cout << "A" << endl; break;
        case 0x2B: cout << "1" << endl; break;
        case 0x2C: cout << "A" << endl; break;
        case 0x2D: cout << "1" << endl; break;
        case 0x2E: cout << "A" << endl; break;
        case 0x2F: cout << "1" << endl; break;

        case 0x30: cout << "NOP" << endl; break;
        case 0x31: cout << "1" << endl; break;
        case 0x32: cout << "1" << endl; break;
        case 0x33: cout << "NOP" << endl; break;
        case 0x34: cout << "1" << endl; break;
        case 0x35: cout << "1" << endl; break;
        case 0x36: cout << "NOP" << endl; break;
        case 0x37: cout << "1" << endl; break;
        case 0x38: cout << "1" << endl; break;
        case 0x39: cout << "NOP" << endl; break;
        case 0x3A: cout << "A" << endl; break;
        case 0x3B: cout << "1" << endl; break;
        case 0x3C: cout << "A" << endl; break;
        case 0x3D: cout << "1" << endl; break;
        case 0x3E: cout << "A" << endl; break;
        case 0x3F: cout << "1" << endl; break;

        case 0x40: cout << "NOP" << endl; break;
        case 0x41: cout << "1" << endl; break;
        case 0x42: cout << "1" << endl; break;
        case 0x43: cout << "NOP" << endl; break;
        case 0x44: cout << "1" << endl; break;
        case 0x45: cout << "1" << endl; break;
        case 0x46: cout << "NOP" << endl; break;
        case 0x47: cout << "1" << endl; break;
        case 0x48: cout << "1" << endl; break;
        case 0x49: cout << "NOP" << endl; break;
        case 0x4A: cout << "A" << endl; break;
        case 0x4B: cout << "1" << endl; break;
        case 0x4C: cout << "A" << endl; break;
        case 0x4D: cout << "1" << endl; break;
        case 0x4E: cout << "A" << endl; break;
        case 0x4F: cout << "1" << endl; break;

        case 0x50: cout << "NOP" << endl; break;
        case 0x51: cout << "1" << endl; break;
        case 0x52: cout << "1" << endl; break;
        case 0x53: cout << "NOP" << endl; break;
        case 0x54: cout << "1" << endl; break;
        case 0x55: cout << "1" << endl; break;
        case 0x56: cout << "NOP" << endl; break;
        case 0x57: cout << "1" << endl; break;
        case 0x58: cout << "1" << endl; break;
        case 0x59: cout << "NOP" << endl; break;
        case 0x5A: cout << "A" << endl; break;
        case 0x5B: cout << "1" << endl; break;
        case 0x5C: cout << "A" << endl; break;
        case 0x5D: cout << "1" << endl; break;
        case 0x5E: cout << "A" << endl; break;
        case 0x5F: cout << "1" << endl; break;

        case 0x60: cout << "NOP" << endl; break;
        case 0x61: cout << "1" << endl; break;
        case 0x62: cout << "1" << endl; break;
        case 0x63: cout << "NOP" << endl; break;
        case 0x64: cout << "1" << endl; break;
        case 0x65: cout << "1" << endl; break;
        case 0x66: cout << "NOP" << endl; break;
        case 0x67: cout << "1" << endl; break;
        case 0x68: cout << "1" << endl; break;
        case 0x69: cout << "NOP" << endl; break;
        case 0x6A: cout << "A" << endl; break;
        case 0x6B: cout << "1" << endl; break;
        case 0x6C: cout << "A" << endl; break;
        case 0x6D: cout << "1" << endl; break;
        case 0x6E: cout << "A" << endl; break;
        case 0x6F: cout << "1" << endl; break;

        case 0x70: cout << "NOP" << endl; break;
        case 0x71: cout << "1" << endl; break;
        case 0x72: cout << "1" << endl; break;
        case 0x73: cout << "NOP" << endl; break;
        case 0x74: cout << "1" << endl; break;
        case 0x75: cout << "1" << endl; break;
        case 0x76: cout << "NOP" << endl; break;
        case 0x77: cout << "1" << endl; break;
        case 0x78: cout << "1" << endl; break;
        case 0x79: cout << "NOP" << endl; break;
        case 0x7A: cout << "A" << endl; break;
        case 0x7B: cout << "1" << endl; break;
        case 0x7C: cout << "A" << endl; break;
        case 0x7D: cout << "1" << endl; break;
        case 0x7E: cout << "A" << endl; break;
        case 0x7F: cout << "1" << endl; break;

        case 0x80: cout << "NOP" << endl; break;
        case 0x81: cout << "1" << endl; break;
        case 0x82: cout << "1" << endl; break;
        case 0x83: cout << "NOP" << endl; break;
        case 0x84: cout << "1" << endl; break;
        case 0x85: cout << "1" << endl; break;
        case 0x86: cout << "NOP" << endl; break;
        case 0x87: cout << "1" << endl; break;
        case 0x88: cout << "1" << endl; break;
        case 0x89: cout << "NOP" << endl; break;
        case 0x8A: cout << "A" << endl; break;
        case 0x8B: cout << "1" << endl; break;
        case 0x8C: cout << "A" << endl; break;
        case 0x8D: cout << "1" << endl; break;
        case 0x8E: cout << "A" << endl; break;
        case 0x8F: cout << "1" << endl; break;

        case 0x90: cout << "NOP" << endl; break;
        case 0x91: cout << "1" << endl; break;
        case 0x92: cout << "1" << endl; break;
        case 0x93: cout << "NOP" << endl; break;
        case 0x94: cout << "1" << endl; break;
        case 0x95: cout << "1" << endl; break;
        case 0x96: cout << "NOP" << endl; break;
        case 0x97: cout << "1" << endl; break;
        case 0x98: cout << "1" << endl; break;
        case 0x99: cout << "NOP" << endl; break;
        case 0x9A: cout << "A" << endl; break;
        case 0x9B: cout << "1" << endl; break;
        case 0x9C: cout << "A" << endl; break;
        case 0x9D: cout << "1" << endl; break;
        case 0x9E: cout << "A" << endl; break;
        case 0x9F: cout << "1" << endl; break;

    }
    
    return opbytes;

}


int main()
{

    unsigned int buffer_instr[] = {0x01, 0x03, 0x09}; // buffer de c—digos de operacion

    desensamblar8080(buffer_instr, 0);

    return 0;
}




