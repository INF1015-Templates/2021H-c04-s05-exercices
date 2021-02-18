///
/// Ce projet utilise quelques librairies disponibles sur Vcpkg et permet entre autre d'en tester le bon fonctionnement.
///


#include <cstddef>
#include <cstdint>

#include <array>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <span>
#include <utility>

#include <cppitertools/range.hpp>
#include <cppitertools/enumerate.hpp>
#include <cppitertools/zip.hpp>

#include "Fraction.hpp"
#include "Vector.hpp"

using namespace std;
using namespace iter;


void runFractionExample() {
	Fraction foo(42, -4);
	Fraction bar = 10;
	Fraction qux = bar;
	qux += -5;
	qux += bar += Fraction(1, 2);

	cout << "foo        = " << foo << "\n"
	     << "bar        = " << bar << "\n"
	     << "qux        = " << qux << "\n"
	     << "-foo       = " << -foo << "\n"
	     << "foo + bar  = " << (foo + bar) << "\n"
	     << "foo + -bar = " << (foo + -bar) << "\n"
	     << "bar        = " << bar << "\n"
	     << "bar++      = " << bar++ << "\n"
	     << "bar        = " << bar << "\n"
	     << "++bar      = " << ++bar << "\n"
	     << "foo >= bar = " << (foo >= bar) << "\n";
}

void runVectorExample() {
	array<int, 3> values1 = {1, 2, 3};
	array<int, 3> values2 = {10, 20, 30};
	Vector foo(values1);
	Vector bar(values2);
	cout << foo << "\n";
}


int main() {
	runFractionExample();
	cout << "\n\n\n";
	runVectorExample();
}

